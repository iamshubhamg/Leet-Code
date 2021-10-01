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
    displayDoublyLL(head);
    reverseDisplayDoublyLL(tail);
    delete []head;
    return 0;
}
