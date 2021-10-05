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

void insertNode(int pos, int value){
    struct Node *p = head, *q;
    if(pos == 0){
        q = new Node;
        q->data = value;
        q->prev = NULL;
        q->next = head;
        head->prev = q;
        head = q;
    }
    else if(pos == dllLength()){
        q = new Node;
        q->data = value;
        q->next = NULL;
        q->prev = tail;
        tail->next = q;
        tail = q;
    }
    else{
        for(int i=1; i<pos; i++){
            p = p->next;
        }
        q = new Node;
        q->data = value;
        q->next = p->next;
        p->next->prev = q;
        q->prev = p;
        p->next = q;
    }


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
    insertNode(0, 10);
    insertNode(3, 15);
    insertNode(dllLength(), 20);
    displayDoublyLL(head);
    reverseDisplayDoublyLL(tail);
    delete []head;
    return 0;
}
