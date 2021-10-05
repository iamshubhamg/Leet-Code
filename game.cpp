#include <iostream>
using namespace std;
template <class T>
void swapargs(T &a,T &b)
{
  T temp;
  temp=a;
  a=b;
  b=temp;
  cout<<a<<" "<<b<<endl;
}
int main() {
	int a,b;
  float i,j;
  char m,n;
  cin>>a>>b>>i>>j>>m>>n;
  swapargs(a,b);
  swapargs(i,j);
  swapargs(m,n);
	return 0;
}
