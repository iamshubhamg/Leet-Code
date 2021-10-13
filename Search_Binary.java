#include <iostream>
#include <stdio.h>
#include <array>
using namespace std;

int binarySearch(int arr[], int len, int key)
{
    int prev=0;
    int post = len-1;
    int mid=0;
    while(prev<=post)
    {
        mid=(prev+post)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            post=mid-1;
        }
        else
        {
            prev=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"give number"<<endl;
    cin>>n;
    int a[n];
    cout<<"give array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"give the number to search"<<endl;
    cin>>k;
    int x=binarySearch(a,n,k);
    if(x==-1)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found at "<<x;
    }
}
