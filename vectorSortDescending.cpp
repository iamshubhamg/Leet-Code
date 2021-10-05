#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Get the vector 
    vector<int> a = { 1, 45, 54, 71, 76, 12 }; 
  
    // Print the vector 
    cout << "Vector: "; 
    for (int i = 0; i < a.size(); i++) 
        cout << a[i] << " "; 
    cout << endl; 
  
    // Sort the vector in descending order 
    sort(a.begin(), a.end(), greater<int>()); 
  
    // Print the reversed vector 
    cout << "Sorted Vector in descendiing order:n"; 
    for (int i = 0; i < a.size(); i++) 
        cout << a[i] << " "; 
    cout << endl; 
  
    return 0; 
} 
