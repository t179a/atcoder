#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int64_t> A(N);
  map<int64_t, int64_t> memo;
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
    memo[A.at(i)]++;
  }
  map<int64_t,int64_t> all;
  map<int64_t,int64_t> part;
  int64_t total = 0;
  for(auto p : memo){
    all[p.first] = p.second * (p.second - 1) / 2;
    part[p.first] = (p.second - 1) * (p.second - 2) / 2;
    total += all[p.first];
  }
  for(int i = 0; i < N; i++){
    int64_t ans = total;
    ans -= all[A.at(i)];
    ans += part[A.at(i)];
    cout << ans << endl;
  }
    
}
                                      
  
