#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

/*----------------Basic macros stolen from online-----------------*/
#define ll long long
#define PI 3.1415926535897932384626
#define REMAX(a,b) (a)=max((a),(b))
#define REMIN(a,b) (a)=min((a),(b))
#define MOD 1000000007
#define abs(x) (x<0?(-x):x)
#define max(a,b) (a<b?b:a)

/*---------------------my custom ones macros----------------------*/
//Basic get 1,2,3 ints respectively(assumes a,b,c already defined):
#define get1(a) scanf("%d",&(a))
#define get2(a,b) scanf("%d%d",&(a),&(b))
#define get3(a,b,c) scanf("%d%d%d",&(a),&(b),&(c))

//Basic for loops
#define f1(i,n) for(i=0;i<n;i++)
#define f2(i,n) for(i=1;i<=n;i++)
#define flr1(i,L,R) for(i=L;i<R;i++)
#define flr2(i,L,R) for(i=L;i<=R;i++)

//Get a string x:
#define getString(x) scanf("%s",&x)
#define getspacestring(x,delim) scanf(delim,&x)

//Make int n and get its value:
#define mgetn(n) int(n); scanf("%d",&(n))

//Test for n cases:
#define TEST(n) mgetn(n); while(n--)

// For 1D arrays: 
#define getnelementsint(i,n,arr) f1(i,n) scanf("%d",&(arr)[i]);
#define getnelementsfloat(i,n,arr) f1(i,n) scanf("%f",&(arr)[i]);

//for 2D Arrays:
#define basicarr2dloop(i,j,r,c,L,R) flr1(i,L,r) flr1(j,R,c)
#define advarr2dloop(i,j,r,c,L,R,command,outercommand) flr1(i,L,r){flr1(j,R,c){command}outercommand}
#define get2dintarray(i,j,r,c,arr) advarr2dloop(i,j,r,c,0,0,scanf("%d",&arr[i][j]);,);
#define get2dfloatarray(i,j,r,c,arr) advarr2dloop(i,j,r,c,0,0,scanf("%f",&arr[i][j]);,);
#define p2dintarrwspace(i,j,a,b,arr) advarr2dloop(i,j,a,b,0,0,printf("%d ",arr[i][j]);,printf("\n");); 

//Example "p2dfloatarrwspace(i,j,a,b,ar3,"%0.2f ");" to print 0.2, space-seperated float array.
#define p2dfloatarrwspace(i,j,a,b,arr,ouputformat) advarr2dloop(i,j,a,b,0,0,printf(outputformat,arr[i][j]);,printf("\n");); 

int main()
{
    char s1[100], s2[100], i;
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("\nInput String : %s",s1);
    printf("\nCopied String : %s",s2);
    printf("\nDivided Strings\n");
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==' ')printf("\n");
        else printf("%c",s1[i]);
    }
  return 0;
}
