#include <stdio.h>
#include <math.h>
#include <limits.h>
#define ll long long
#define PI 3.1415926535897932384626
#define get1(a) scanf("%d",&(a))
#define get2(a,b) scanf("%d%d",&(a),&(b))
#define get3(a,b,c) scanf("%d%d%d",&(a),&(b),&(c)) 
#define mgetn(n) int(n); scanf("%d",&(n))
#define TEST(n) mgetn(n); while(n--)
#define getString(x) scanf("%s",x)
#define F1(i,n) for(i=0;i<n;i++)
#define F2(i,n) for(i=1;i<=n;i++)
#define FLR1(i,L,R) for(i=L;i<R;i++)
#define FLR2(i,L,R) for(i=L;i<=R;i++)
#define REMAX(a,b) (a)=max((a),(b))
#define REMIN(a,b) (a)=min((a),(b))
#define MOD 1000000007
#define abs(x) (x<0?(-x):x)
#define max(a,b) (a<b?b:a)
#define getnelementsint(n,i,arr) F1(i,n) scanf("%d",&arr[i]);
#define getnelementsfloat(n,i,arr) F1(i,n) scanf("%f",&arr[i]);
#define get2dintarray(r,c,i,arr) F1(i,r) F2(j,c) get1(arr[i][j]);
#define get2dfloatarray(r,c,i,arr) F1(i,r) F2(j,c) scanf("%f",arr[i][j]);
#define arr2dloop(i,j,r,c,L,R) FLR1(i,L,r) FLR1(j,R,c)
const int N = 500;
void multiply(int mat1[][N], int mat2[][N], int res[][N]) 
{ 
    int i, j, k; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < N; k++) 
                res[i][j] += mat1[i][k]*mat2[k][j]; 
        } 
    } 
} 
int main()
{
  int a,b,c,d,i,j;
  float f1,f2;
  double d1,d2;
  char x[500],y[500];
  int ar1[500][500],ar2[500][500],sum[500][500],diff[500][500],mul[500][500];
  get1(a);
  F1(i,a){
    F1(j,a){
        get1(ar1[i][j]);}}
  F1(i,a){
    F1(j,a)
    {
        get1(ar2[i][j]);
        sum[i][j] = ar1[i][j]+ar2[i][j];
        diff[i][j] = ar1[i][j]-ar2[i][j];
    }}
  multiply(ar1,ar2,mul);
  printf("Sum\n");
  F1(i,a)
  {
      F1(j,a)printf("%d ",sum[i][j]);
      printf("\n");
  }
  printf("Difference\n");
  F1(i,a)
  {
      F1(j,a)printf("%d ",diff[i][j]);
      printf("\n");
  }
  printf("Multiply\n");
  F1(i,a)
  {
      F1(j,a)printf("%d ",mul[i][j]);
      printf("\n");
  }
  return 0;
}
