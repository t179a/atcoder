#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0,0,1,1};
int dy[4] = {0,1,0,1};

int main(){
  int H, W; cin >> H >> W;
  vector<string> S(H);
  for(int i = 0; i < H; i++){
    cin >> S.at(i);
  }
  int64_t ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      int sum = 0;
      bool flag = false;
      for(int k = 0; k < 4; k++){
        int y = i + dy[k];
        int x = j + dx[k];
        if(y < 0 || y >= H || x < 0 || x >= W){
          flag = true;
          continue;
        }
        if(S.at(y).at(x) == '#')sum++;
      }
      if(flag) continue;
      //cout << sum << endl;
      if(sum == 1 || sum == 3) ans++;
    }
  }
  cout << ans << endl;
}
