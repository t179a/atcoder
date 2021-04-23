#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  set<int>set_n;
  set<int>set_m;
  for(int i = 0; i < N; i++){
    int n; cin >> n;
    set_n.insert(n);
  }
  for(int i = 0; i < M; i++){
    int m; cin >> m;
    set_m.insert(m);
  }
  vector<int> ans;
  for(auto n:set_n){
    if(!set_m.count(n)){
      ans.push_back(n);
    }
  }
  for(auto m:set_m){
    if(!set_n.count(m)){
      ans.push_back(m);
    }
  }
  sort(ans.begin(), ans.end());
  for(int i = 0; i < (int) ans.size(); i++){
    cout << ans.at(i) << endl;
  }
}
