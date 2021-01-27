#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, K;
  cin >> N >> K;
  vector<int64_t> A(N);
  vector<int64_t> S(N);
  int64_t sum = 0;
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
    sum += A.at(i);
    S.at(i) = sum;
  }
  int64_t ans = 0;
  for(int i = 0; i < N - K + 1; i++){
    ans += S.at(i + K - 1);
    if(i == 0) continue;
    ans -= S.at(i-1);
  }
  cout << ans << endl;
  
  
}
