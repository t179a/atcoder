#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, Q; cin >> N >> M >> Q;
  vector<pair<int, int>> vp;
  for(int i = 0; i < N; i++){
    int w, v; cin >> w >> v;
    vp.emplace_back(w, v);
  }
  vector<int> X;
  for(int i = 0; i < M; i++){
    int x; cin >> x;
    X.push_back(x);
  }
  sort(vp.begin(), vp.end(), [](pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
  });

  for(int i = 0; i < Q; i++){
    int left, right; cin >> left >> right;
    left--; right--;
    vector<int> C;
    for(int i = 0; i < M; i++){
      if(i >= left && i <= right)continue;
      C.push_back(X.at(i));
    }
    sort(C.begin(), C.end());
    int len = C.size();
    vector<bool> vb(len, true);
    int64_t ans = 0;
    for(int i = 0; i < N; i++){
      for(int p = 0; p < len; p++){
        if(vp.at(i).first <= C.at(p) && vb.at(p)){
          ans += vp.at(i).second;
          vb.at(p) = false;
          break;
        }
      }
    }
    cout << ans << endl;
  }
  
}
