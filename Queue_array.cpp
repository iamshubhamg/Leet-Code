#include<iostream>
using namespace std;
int queue[100],rear=-1,front=-1,n=100;
void insert(){
    int val;
    if(rear== n-1){
        cout<<"Queue Overflow"<<endl;
    }
    else{
        if(front==-1)
        front=0;
        cout<<"Insert the element in queue:"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
void Delete(){
    if(front==-1||front>rear){
        cout<<"Queue is Underflow";
        return;
    }
    else
    {
        cout<<"Element deleted from queue is:"<<queue[front]<<endl;
        front++;
        
    }
}
void display(){
    if(front==-1)
    cout<<"queue is empty"<<endl;
    else{
        cout<<"queue elements are:";
        for(int i=front;i<=rear; i++)
        cout<<queue[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int ch;
    cout<<"1) Insert element to queue"<<endl;
    cout<<"2) Delete element to queue"<<endl;
    cout<<"1) Display element to queue"<<endl;
    cout<<"1) Exit"<<endl;
    do{
        cout<<"Enter your choice:"<<endl;
        cin>>ch;
        switch(ch){
            case 1: insert();
            break;
            case 2: Delete();
            break;
            case 3:display();
            break;
            case 4:cout<<"Exit"<<endl;
            break;
            default:cout<<"Invalid choice"<<endl;
        }
    }while(ch!=4);
    return 0;
    
}
