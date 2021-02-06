#include<bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<pair<int,int>>> vp(N, vector<pair<int,int>>());
  for(int i = 0; i < N; i++){
    int a;
    cin >> a;
    for(int j = 0; j < a; j++){
      int x, y;
      cin >> x >> y;
      x--;
      vp.at(i).emplace_back(x, y);
    }
  }
  
  int ans = 0;
  for(int i = 0; i < (1 << N); i++){
    bitset<15> b(i);
    int count = 0;
    for(int p = 0; p < N; p++) {
      if(b.test(p)) count++;
    }
    bool ok = true;
    for(int j = 0; j < N; j++){
      if(b.test(j)){
        for(auto p : vp.at(j)){
          int x = p.first;
          int y = p.second;
          if(y == 1 && b.test(x)){
            continue;
          }else if(y == 0 && !b.test(x)){
            continue;
          }else{
            ok = false;
          }
        }
      }
    }
    if(ok) ans = max(ans, count);
  }
  cout << ans << endl;
}
