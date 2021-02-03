#include <bits/stdc++.h>
using namespace std;

void pf(int n, map<int, int> &M){
  for(int i = 2; i * i <= n; i++){
    if(n % i != 0) continue;
    while(n % i == 0){
      if(M.count(i)){
        M[i]++;
      }else{
        M[i] = 1;
      }
      n /= i;
    }
  }
  if(n != 1){
    if(M.count(n)){
      M[n]++;
    }else{
      M[n] = 1;
    }
  }
}

int main(){
  int64_t mod = 1000000007;
  int N;
  cin >> N;
  map<int, int> M;
  int64_t ans = 1;
  for(int j = 2; j <= N; j++){
    pf(j, M);
  }
  for(auto p : M){
    //cout << p.first << p.second << endl;
    ans *= p.second+1;
    ans %= mod;
  }
  cout << ans << endl;
}
