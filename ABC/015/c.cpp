#include <bits/stdc++.h>
using namespace std;
bool ok = true;
void dfs(int p, int b, vector<vector<int>> &vv, int &N, int &K){
  if(p == N){
    if(b == 0){
      ok = false;
      return;
    }else{
      return;
    }
  }
  for(int i = 0; i < K; i++){
    dfs(p+1, b ^ vv.at(p).at(i), vv, N, K);
  }
}

int main(){
  int N, K;
  cin >> N >> K;
  vector<vector<int>> vv(N, vector<int>(K));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < K; j++){
      cin >> vv.at(i).at(j);
    }
  }
  dfs(0,0,vv,N,K);
  if(ok){
    cout << "Nothing" << endl;
  }else{
    cout << "Found" << endl;
  }
}
  
