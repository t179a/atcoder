#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, h, w;
  cin >> H >> W >> h >> w;
  int ans = H*W - H*w - W*h + h*w;
  cout << ans << endl;
}
