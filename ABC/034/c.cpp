#include<bits/stdc++.h>
using namespace std;
const int64_t mod = 1000000007;
int64_t inv(int64_t a, int64_t m){
  int64_t b = m, u = 1, v = 0;
  while(b){
    int64_t t = a / b;
    a -= t * b; swap(a, b);
    u -= t * v; swap(u, v);
  }
  return (u % m + m) % m;
}


int main(){
  int W, H; cin >> W >> H;
  W--; H--;
  int sum = W + H;
  int min_n = min(W, H);
  
  int64_t ans = 1;
  for(int i = 1; i <= min_n; i++){
    ans = ans * (sum - i + 1);
    ans += mod;
    ans %= mod;
    ans *= inv(i, mod);
    ans += mod;
    ans %= mod;
  }
  cout << ans << endl;
}
    
    
  
