// C++ program to find all the missing elements in a range 

#include<bits/stdc++.h>
using namespace std;

void print_missing_numbers(int arr[], int n, int low, int high)
{
sort(arr, arr+n);

int *ptr = lower_bound(arr, arr+n, low);
int index = ptr - arr;

int i = index, x = low;
while (i < n && x<=high)
{
if (arr[i] != x)
cout << x << " ";

else
i++;
x++;
}

while (x <= high)
cout << x++ << " ";
}

int main()
{
int n, low, high;
cout << "\nEnter the number of elements : ";
cin >> n;
int arr[n];
cout << "\nInput the array elements : ";
for(int i = 0; i < n; i++)
{
cin >> arr[i];
}
cout << "\nEnter the start and end values : ";
cin >> low >> high;
cout << "\nMissing numbers : ";
print_missing_numbers(arr, n, low, high);
cout<<endl;
return 0;
}
