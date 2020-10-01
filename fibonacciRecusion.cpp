#include <iostream>
using namespace std;

int fibonacci(int x) 
{
   if((x==1)||(x==0))
      return(x);
   else
      return (fibonacci(x-1)+fibonacci(x-2));
}

int main() 
{
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) 
   {
      cout << " " << fibonacci(i);
      i++;
   }
   return 0;
}
