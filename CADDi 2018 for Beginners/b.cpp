#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, H, W; cin >> N >> H >> W;
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    int a, b; cin >> a >> b;
    ans += min(a/H, b/W);
  }
  cout << ans << endl;
}
