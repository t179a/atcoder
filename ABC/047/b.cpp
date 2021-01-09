#include <bits/stdc++.h>
using namespace std;

int main(){
  int W, H, N;
  cin >> W >> H >> N;
  int x_min = 0;
  int y_min = 0;
  int x_max = W;
  int y_max = H;
  for(int i = 0; i < N; i++){
    int x, y, a;
    cin >> x >> y >> a;
    if(a == 1){
      x_min = max(x_min, x);
    }else if(a == 2){
      x_max = min(x_max, x);
    }else if(a == 3){
      y_min = max(y_min, y);
    }else if(a == 4){
      y_max = min(y_max, y);
    }
  }
  if(x_max <= x_min || y_max <= y_min){
    cout << 0 << endl;
    return 0;
  }
  int ans = (x_max - x_min) * (y_max - y_min);
  cout << ans << endl;
}
