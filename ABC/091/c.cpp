#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<pair<int,int>> R, B;
  for(int i = 0; i < N; i++){
    int x, y; cin >> x >> y;
    R.emplace_back(x, y);
  }
  for(int i = 0; i < N; i++){
    int x, y; cin >> x >> y;
    B.emplace_back(x, y);
  }
  sort(R.begin(), R.end(), [](pair<int,int> a,pair<int,int>b){
    return a.second > b.second;
  });
  sort(B.begin(), B.end());
  int ans = 0;
  vector<bool> r(N, false);
  for(auto p :B){
    for(int i = 0; i < N; i++){
      if(r.at(i)) continue;
      if(p.first > R.at(i).first && p.second > R.at(i).second){
        ans++;
        r.at(i) = true;
        break;
      }
    }
  }
  cout << ans << endl;
}
  
  
