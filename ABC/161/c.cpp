#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, K;
  cin >> N >> K;
  int64_t ans = min(N % K, abs(N % K - K));
  cout << ans << endl;
}
