#include <stdio.h>
int main() {
 int A[50][50];
 int i, j, M, N;
 int size;
 int rowsum, columnsum, diagonalsum1,diagonalsum2;
 int magic = 0;
    scanf("%d",&M);
    N=M;
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    diagonalsum1 = 0;
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            if(i==j) {
                diagonalsum1 = diagonalsum1 + A[i][j];
            }
        }
    }
    diagonalsum2 = 0;
    for(i=M-1,j=0; i>=0;i--,j++ ) {
        diagonalsum2 = diagonalsum2 + A[i][j];
    }
    if(diagonalsum1!=diagonalsum2){
        printf("Not a Magic Matrix");
        return 0;
    }
    else
        diagonalsum1=diagonalsum2;
    for(i=0; i<M; i++) {
        rowsum = 0;
        for(j=0; j<N; j++) {
            rowsum = rowsum + A[i][j];
        }
        if(rowsum != diagonalsum1) {
            printf("Not a Magic Matrix");
        return 0;
    }
 }
    for(i=0; i<M; i++) {
        columnsum = 0;
        for(j=0; j<N; j++) {
            columnsum = columnsum + A[j][i];
        }
        if(columnsum != diagonalsum1) {
            printf("Not a Magic Matrix");
        return 0;
        }
 }
 printf("Magic matrix");
 return 0;
}
