#include<iostream>
using namespace std;

struct Node{
    struct Node *prev, *next;
    int data;
}*head, *tail;

void createCircularDoublyLL(int arr[], int n){
    if(n == 0){
        head = tail = NULL;
    }
    else if(n == 1){
        head = new Node;
        head->data = arr[0];
        head->next = NULL;
        head->prev = NULL;
        tail = head;
    }
    else{
        struct Node *p, *last;
        head = new Node;
        head->data = arr[0];
        head->next = NULL;
        head->prev = NULL;
        last = head;
        for(int i=1; i<n; i++){
            p = new Node;
            p->data = arr[i];
            p->next = NULL;
            p->prev = last;
            last->next = p;
            last = p;
        }
        last->next = head;
        head->prev = last;
        tail = last;
    }
}

void displayCircularDoublyLL(struct Node *p){
    do{
        cout << p->data << "->";
        p = p->next;
    }while(p != head);
    cout << endl;
}

void reverseDisplayCircularDoublyLL(struct Node *p){
    do{
        cout << p->data << "->";
        p = p->prev;
    }while(p != tail);
    cout << endl;
}

int Length(){
    struct Node *p = head;
    int count=0;
    do{
        count++;
        p = p->next;
    }while(p != head);

    return count;
}

void insertNode(int pos, int value){
    struct Node *p, *q;
    if(pos == 0 || pos == Length()){
        p = new Node;
        p->data = value;
        p->next = head;
        p->prev = tail;
        head->prev = p;
        tail->next = p;
        if(pos == 0){
            head = p;
        }
        else if(pos+1 == Length()){
            tail = p;
        }
    }
    else{
        p = new Node;
        p->data = value;
        q = head;
        for(int i=1; i<pos; i++) q = q->next;
        p->next = q->next;
        p->prev = q;
        q->next->prev = p;
        q->next = p;
    }
}

int deleteNode(int pos){
    struct Node *p;
    int x;
    if(pos == 0){
        p = head;
        x = p->data;
        head = head->next;
        head->prev = p->prev;
        p->prev->next = head;
    }
    else if(pos == Length()){
        p = tail;
        x = p->data;
        tail = tail->prev;
        tail->next = p->next;
        p->next->prev = tail;
    }
    else{
        p = head;
        for(int i=1; i<pos; i++) p = p->next;
        x = p->data;
        p->prev->next = p->next;
        p->next->prev = p->prev;
    }
    delete p;
    return x;
}

int main(){
    int arr[] = {1,2,3,4,5};
    createCircularDoublyLL(arr, 5);
    insertNode(0, 10);
    insertNode(Length(), 20);
    insertNode(4, 15);
    cout << "The Element deleted is: " << deleteNode(Length()) << endl;
    cout << "The Element deleted is: " << deleteNode(0) << endl;
    cout << "The Element deleted is: " << deleteNode(4) << endl;
    displayCircularDoublyLL(head);
    reverseDisplayCircularDoublyLL(tail);
    delete []head;
    return 0;
}
