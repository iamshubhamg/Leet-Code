#include<stdio.h>
int main()
{
    int arr[10][10],i,j,m,n,k,dsum=0,rsum=0,csum=0,flag=0,transpose[10][10];
    long determinant;
    scanf("%d %d",&m,&n);
    if(m >= 4 && n>=4)
    {
    printf("Invalid Input\n");
    }
    else
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            dsum += arr[i][j];
        }
    }
    printf("The sum of\n");
    printf("Diagonal elements : %d\n", dsum);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            rsum += arr[i][j];
        }
        printf("Row %d : %d\n",i+1,rsum);
        if(rsum != dsum)
        {
            flag=1;
        }
        rsum=0;
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            csum += arr[i][j];
        }
        printf("Column %d : %d\n",j+1,csum);
        if(csum != dsum)
        {
            flag=1;
        }
        csum=0;
    }
    if(flag == 0)
    printf("Magic square\n");
    else
    printf("Not a magic square\n");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    printf("Transpose : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    if(m==2 && n==2)
    {
        determinant = arr[0][0]*arr[1][1] - arr[1][0]*arr[0][1];
    }
    else if(m==3 && n==3)
    {
    determinant = arr[0][0] * ((arr[1][1]*arr[2][2]) - (arr[2][1]*arr[1][2])) -arr[0][1] * (arr[1][0]
   * arr[2][2] - arr[2][0] * arr[1][2]) + arr[0][2] * (arr[1][0] * arr[2][1] - arr[2][0] * arr[1][1]);
    }
    printf("Determinant : %ld", determinant);
    }
    return 0;
}
