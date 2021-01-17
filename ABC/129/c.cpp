#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t INF = 1000000007;
  int N, M;
  cin >> N >> M;
  int64_t d[100001];
  for(int i = 0; i < 100001; i++){
    d[i] = 0;
  }
  for(int i = 0; i < M; i++){
    int num;
    cin >> num;
    d[num] = -1;
  }
  d[0] = 1;
  if(d[1] != -1){
    d[1] = 1;
  }
  for(int i = 2; i <= N; i++){
    int64_t p = d[i-2];
    if(p == -1){
      p = 0;
    }
    int64_t q = d[i-1];
    if(q == -1){
      q = 0;
    }
    if(d[i] == -1){
      continue;
    }else{
      d[i] = (p + q)%INF;
    }
  }
  cout << d[N] << endl;
}
    
  
