#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  vector<int64_t> v(N);
  for(int i = 0; i < N; i++){
    cin >> v.at(i);
  }
  sort(v.begin(), v.end(), greater<int64_t>());
  vector<int64_t> sum(N);
  int64_t total = 0;
  for(int i = N-1; i >= 0; i--){
    total += v.at(i);
    sum.at(i) = total;
  }
  int64_t ans = 0;
  for(int i = 1; i < N; i++){
    ans += v.at(i-1) * (N-i) - (sum.at(i));
  }
  cout << ans << endl;
}
