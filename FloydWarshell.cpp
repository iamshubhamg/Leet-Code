#include<bits/stdc++.h>
using namespace std;

void FloydWarshell(vector<vector<int>>&matrix,int n){

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][k] ==-1 || matrix[k][j]==-1) continue;

                if(matrix[i][j]==-1){
                    matrix[i][j]=matrix[i][k]+matrix[k][j];
                }

                else
                    matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
            }
        }    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout <<endl;
    }
}


int main(){

    int n;
    cin >> n;
    vector<vector<int>>matrix(n, vector<int>(n, -1));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    cout<<"Matrix after performing FloydWarshell Algo:-"<<endl;
    FloydWarshell(matrix,n);

    return 0;
}