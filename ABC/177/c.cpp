#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t mod = 1000000007;
  int N;
  cin >> N;
  vector<int64_t> vec(N);
  int64_t sum = 0;
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
    sum %= mod;
  }
  int64_t ans = 0;
  for(int i = 0; i < N - 1; i++){
    sum -= vec.at(i);
    if(sum < 0){
      sum += mod;
    }
    ans += vec.at(i) * sum % mod;
    ans %= mod;
  }
  ans = (ans + mod)%mod;
  cout << ans << endl;
}
