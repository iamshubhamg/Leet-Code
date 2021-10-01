#include <bits/stdc++.h>
#define V 4
#define I INT_MAX
using namespace std;

void printSolution(int graph[][V]){
  for(int i=0; i<V; i++){
    for(int j=0; j<V; j++){
      graph[i][j] == I ?
      cout << "I " :
      cout << graph[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
}

void floydWarshal(int graph[V][V]){
  int i, j, k;

  for(k=0; k<V; k++){
    for(i=0; i<V; i++){
      for(j=0; j<V; j++){
        if(graph[i][j] > graph[i][k] + graph[k][j] && graph[i][k] != I && graph[k][j] != I)
          graph[i][j] = graph[i][k] + graph[k][j];
      }
    }
    printSolution(graph);
  }


}

int main(){
  int graph[V][V] = {
                      {0, 3, I, 7},
                      {8, 0, 2, I},
                      {5, I, 0, 1},
                      {2, I, I, 0},
                    };
    floydWarshal(graph);
  return 0;
}
