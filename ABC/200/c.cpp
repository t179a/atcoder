#include<bits/stdc++.h>
using namespace std;


int main(){
  int64_t N; cin >> N;
  int64_t ans = 0;
  map<int64_t, int64_t> m;
  for(int64_t i = 0; i < N; i++){
    int64_t a; cin >> a;
    a %= 200;
    m[a]++;
  }
  for(auto p : m){
    ans += p.second * (p.second - 1) / 2;
  }
  cout << ans << endl;
}
