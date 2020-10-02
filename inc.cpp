#include <iostream>
using namespace std;

struct increment
{
  int var1;
  int var2;
};

int main() {
	struct increment *ptr1,*ptr2,a,b;
  ptr1=&a;
  ptr2=&b;
  cin >> (*ptr1).var1>>(*ptr2).var2;
  cout<<((*ptr1).var1)+11<<endl<<((*ptr2).var2)*10;
	return 0;
}
