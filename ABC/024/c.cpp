#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D, K; cin >> N >> D >> K;
  vector<pair<int, int>> vp;
  for(int i = 0; i < D; i++){
    int l, r;
    cin >> l >> r;
    vp.emplace_back(l, r);
  }
  
  for(int i = 0; i < K; i++){
    int a, b; cin >> a >> b;
    for(int j = 0; j < D; j++){
      if(a <= b){
        if(a >= vp.at(j).first && b <= vp.at(j).second){
          cout << j + 1 << endl;
          break;
        }else if(a >= vp.at(j).first){
          a = max(vp.at(j).second, a);
        }
      }else if(a > b){
        if(b >= vp.at(j).first && a <= vp.at(j).second){
          cout << j + 1 << endl;
          break;
        }else if(a <= vp.at(j).second){
          a = min(a,vp.at(j).first);
        }
      }
    }
  }
  
}
