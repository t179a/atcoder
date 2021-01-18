#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int d[N][N];
  int INF = 1000000001;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      d[i][j] = INF;
    }
  }
  for(int i = 0; i < N; i++){
    d[i][i] = 0;
  }
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    d[a][b] = 1;
    d[b][a] = 1;
  }
  for(int k = 0; k < N; k++){
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
  for(int i = 0; i < N; i++){
    int count = 0;
    for(int j = 0; j < N; j++){
      if(d[i][j] == 2){
        count++;
      }
    }
    cout << count << endl;
  }
}
  
