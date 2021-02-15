#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, H, A, B, C, D, E; cin >> N >> H >> A >> B >> C >> D >> E;
  
  int64_t ans = 1e17;
  for(int64_t x = 0; x <= N; x++){
    int64_t y;
    if((N - x)*E - H - x*B < 0){
      y = 0;
    }else{
      y = ((N - x)*E - H - x*B)/(D + E) + 1;
    }
    ans = min(ans, x * A + y * C);
  }
  cout << ans << endl;
}
