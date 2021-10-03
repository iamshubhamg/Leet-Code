// https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
// 1252. Cells with Odd Values in a Matrix
// There is an m x n matrix that is initialized to all 0's. There is also a 2D array indices where each 
// indices[i] = [ri, ci] represents a 0-indexed location to perform some increment operations on the matrix.
// For each location indices[i], do both of the following:
// Increment all the cells on row ri.
// Increment all the cells on column ci.
// Given m, n, and indices, return the number of odd-valued cells in the matrix after applying the increment 
// to all locations in indices.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
     int matrix[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            matrix[i][j]=0;
        }
    }
    for(int j=0; j<indices.size(); j++){               
                int row= indices[j][0];
                int col= indices[j][1];
                
                for(int k=0; k<m; k++){
                    matrix[k][col]+=1;
                }
                for(int l=0; l<n; l++){
                    matrix[row][l]+=1;
                }                
            }      
        int odd=0;        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
              if(matrix[i][j]%2!=0)
                  odd++;
            }           
        }       
        return odd; 
    }
};
