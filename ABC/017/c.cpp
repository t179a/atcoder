#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int64_t> S(M+2);
  int64_t total_sum = 0;
  for(int i = 0; i < N; i++){
    int64_t l, r, s; cin >> l >> r >> s;
    S.at(l) += s;
    S.at(r+1) -= s;
    total_sum += s;
  }
  for(int i = 1; i < M+2; i++){
    S.at(i) = S.at(i-1) + S.at(i);
  }
  int64_t min_s = 1e9;
  for(int i = 1; i < M+1; i++){
    min_s = min(min_s, S.at(i));
  }
  int64_t ans = total_sum - min_s;
  cout << ans << endl;
}
