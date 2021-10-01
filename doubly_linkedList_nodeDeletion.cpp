#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*head, *tail;

void createDoublyLL(int arr[], int n){
    struct Node *p, *last;
    head = new Node;
    head->prev = NULL;
    head->data = arr[0];
    head->next = NULL;
    last = head;
    for(int i=1; i<n; i++){
        p = new Node;
        p->data = arr[i];
        p->prev = last;
        p->next = NULL;
        last->next = p;
        last = p;
    }
    tail = last;
}

int dllLength(){
    int length=0;
    struct Node *p = head;
    while(p){
        length++;
        p = p->next;
    }
    return length;
}


int deleteNode(int pos){
    struct Node *p, *q;
    int x=-1;
    if(pos < 0 || pos > dllLength()){
        return x;
    }
    else if(pos == 1){
        p = head;
        x = p->data;
        if(p->next){
            head = head->next;
            head->prev = NULL;
        }
    }
    else if(pos == dllLength()){
        p = tail;
        x = p->data;
        tail = tail->prev;
        tail->next = NULL;
    }
    else{
        p = head;
        for(int i=1; i<pos; i++){
            p = p->next;
        }
        x = p->data;
        p->prev->next = p->next;
        p->next->prev = p->prev;

    }
    delete p;
    return x;
}

void displayDoublyLL(struct Node *p){
    while(p != NULL){
        cout << p->data << "->";
        p = p->next;
    }
    cout << endl;
}

void reverseDisplayDoublyLL(struct Node *p){
    while(p != NULL){
        cout << p->data << "->";
        p = p->prev;
    }
    cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    createDoublyLL(arr, 5);
    int x = deleteNode(3);
    x == -1 ? (cout << "Error: Invalid Index\n") : (cout << "Deleted Element is: " << x << endl);
    displayDoublyLL(head);
    reverseDisplayDoublyLL(tail);
    delete []head;
    return 0;
}
