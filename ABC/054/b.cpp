#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  char dn[N][N];
  char dm[M][M];
  for(int i = 0; i < N; i++){
    cin >> dn[i];
  }
  for(int i = 0; i < M; i++){
    cin >> dm[i];
  }
  for(int i = 0; i < N-M+1;i++){
    for(int j = 0; j < N-M+1; j++){
      bool ok = true;
      for(int k = 0; k < M; k++){
        for(int l = 0; l < M; l++){
          if(dm[k][l] != dn[k+i][l+j]){
            ok = false;
          }
        }
      }
      if(ok){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
