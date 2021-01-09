#include <bits/stdc++.h>
using namespace std;

int64_t func(int a,int n){
  int64_t b = 1;
  for(int i = 0; i < n; i++){
    b *= a;
    b %= 1000000007;
  }
  return b;
}
int main(){
  int N;
  cin >> N;
  int64_t ans = func(10,N) - 2 * func(9,N) + func(8,N);
  int64_t mod = 1000000007;
  ans %= mod;
  ans = (ans + mod)%mod;
  cout << ans << endl;
}
  
  
