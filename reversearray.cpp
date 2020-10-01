#include<stdio.h>
long reverse(long n)
{
    int r=0;
    while (n!=0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }
  return r;
}
void reverseElements(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",reverse(a[i]));
}
int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];
    for(int i=0;i<a;i++)scanf("%d",&ar[i]);
    reverseElements(ar,a);
    return 0;
}
