#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int,int> MO,ME;
  for(int i = 0; i < N; i++){
    int a; cin >> a;
    if(i % 2 == 0){
      MO[a]++;
    }else{
      ME[a]++;
    }
  }
  vector<pair<int,int>> VO,VE;
  VO.emplace_back(0,0);
  VE.emplace_back(0,0);
  for(auto p : MO){
    VO.emplace_back(p.second, p.first);
  }
  for(auto p : ME){
    VE.emplace_back(p.second, p.first);
  }
  sort(VO.begin(), VO.end()); reverse(VO.begin(), VO.end()); 
  sort(VE.begin(), VE.end()); reverse(VE.begin(), VE.end());
  int o1 = VO.at(0).second;
  int e1 = VE.at(0).second;
  int ans;
  if(o1 != e1){
    ans = N - VO.at(0).first - VE.at(0).first;
  }else{
    ans = min(N - VO.at(0).first - VE.at(1).first, N - VO.at(1).first - VE.at(0).first);
  }
  cout << ans << endl;
}
  
