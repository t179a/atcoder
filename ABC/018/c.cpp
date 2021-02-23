#include<bits/stdc++.h>
using namespace std;

int main(){
  int R, C, K; cin >> R >> C >> K;
  vector<string> vs;
  for(int i = 0; i < R; i++){
    string s; cin >> s;
    vs.push_back(s);
  }
  
  
  vector<vector<int>> up(R, vector<int>(C,0));
  vector<vector<int>> down(R, vector<int>(C,0));

  for(int x = 0; x < C; x++){
    int count_up = 0;
    for(int y = 0; y < R; y++){
      if(vs.at(y).at(x) == 'o'){
        count_up++;
      }else{
        count_up = 0;
      }
      up[y][x] = count_up;
    }
    int count_down = 0;
    for(int y = R-1; y >= 0; y--){
      if(vs.at(y).at(x) == 'o'){
        count_down++;
      }else{
        count_down = 0;
      }
      down[y][x] = count_down;
    }
  }
  int ans = 0;
  for(int y = K-1; y < R - K + 1; y++){
    for(int x = K-1; x < C - K + 1; x++){
      bool ok = true;
      for(int p = -K + 1; p < K; p++){
        if(up[y][x+p] >= K - abs(p) && down[y][x+p] >= K - abs(p)){
          continue;
        }else{
          ok = false;
        }
      }
      if(ok) ans++;
    }
  }
  cout << ans << endl;
}
  
