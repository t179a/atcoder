#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  char d[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> d[i][j];
    }
  }
  vector<int> vx = {1,0,-1,0};
  vector<int> vy = {0,1,0,-1};
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(d[i][j] == '.'){
        continue;
      }
      int num = 0;
      for(int k = 0; k < 4; k++){
        int y = i + vy.at(k);
        int x = j + vx.at(k);
        if(y < 0 || y > H-1 || x < 0 || x > W-1){
          continue;
        }
        if(d[y][x] == '#'){
          num++;
        }
      }
      if(num == 0){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}
          
      
      
