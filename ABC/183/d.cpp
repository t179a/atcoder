#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;
  int maxt = 200005;
  vector<int64_t> d(maxt, 0);
  
  for(int i = 0; i < N; i++) {
    int64_t s, t, p;
    cin >> s >> t >> p;
    d.at(s) += p;
    d.at(t) -= p;
  }
  
  int64_t maxsum = 0;
  int64_t sum = 0;
  for(int i = 0; i < maxt; i++){
    sum += d[i];
    maxsum = max(sum, maxsum);
  }
  string ans;
  if(maxsum > W){
    ans = "No";
  }else{
    ans = "Yes";
  }
  
  cout << ans << endl;
}
    
    
