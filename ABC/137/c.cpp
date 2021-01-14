#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<string, int64_t> m;
  for(int i = 0; i < N; i++){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    m[s]++;
  }
  int64_t ans = 0;
  for(auto p : m){
    if(p.second == 1){
      continue;
    }else{
      ans += (p.second * (p.second - 1))/2;
    }
  }
  cout << ans << endl;
}
  
