#include <iostream>
using namespace std;

template <class T>
void total(T &a,T &b)
{
  T sum;
  sum=a+b;
  cout<<sum;
}
int main() {
  double x,y;
  cin>>x>>y;
  total(x,y);
	//cout<<"Hello World";
	return 0;
}
