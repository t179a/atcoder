#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t R, C, K, N; cin >> R >> C >> K >> N;
  vector<pair<int64_t,int64_t>> vp;
  //行、列にある飴の数。
  vector<int64_t> vr(R,0);
  vector<int64_t> vc(C,0);
  
  for(int i = 0; i < N; i++){
    int64_t r, c; cin >> r >> c;
    r--; c--;
    vp.emplace_back(r,c);
    vr.at(r)++;
    vc.at(c)++;
  }
  vector<int64_t> sum_r(N, 0);
  vector<int64_t> sum_c(N, 0);
  for(int i = 0; i < R; i++){
    sum_r[vr[i]]++;
  }
  for(int i = 0; i < C; i++){
    sum_c[vc[i]]++;
  }
  int64_t ans = 0;
  for(int i = 0; i <= K; i++){
    ans += sum_r[i] * sum_c[K-i];
  }
  for(int i = 0; i < N; i++){
    int64_t r = vp.at(i).first;
    int64_t c = vp.at(i).second;
    if(vr[r] + vc[c] == K){
      ans--;
    }else if(vr[r] + vc[c] == K + 1){
      ans++;
    }
  }
  cout << ans << endl;
}
    
    
