#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t mod = 1000000007;
  int64_t N;
  cin >> N;
  map<int64_t, int64_t> M;
  
  int64_t P = N-1;
  while(P > 0){
    M[P] = 2;
    P -= 2;
  }
  if(N % 2 == 1){
    M[0] = 1;
  }
  for(int i = 0; i < N; i++){
    int64_t a;
    cin >> a;
    if(M.count(a)){
      M[a]--;
    }else{
      cout << 0 << endl;
      return 0;
    }
  }
  for(auto p : M){
    if(p.second != 0){
      cout << 0 << endl;
      return 0;
    }
  }
  int64_t ans=1;
  if(N % 2 == 0){
    for(int i = 0; i < N/2; i++){
      ans *= 2;
      ans %= mod;
    }
  }else{
    for(int i = 0; i < (N-1)/2; i++){
      ans *= 2;
      ans %= mod;
    }
  }
  cout << ans << endl;
    
}
    
  
  
