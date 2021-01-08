#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  char d[H][W];
  for(int i = 0; i < H; i++){
    cin >> d[i];
  }
  vector<int> xv = {1,1,0,-1,-1,-1,0,1};
  vector<int> yv = {0,-1,-1,-1,0,1,1,1};
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(d[i][j] == '#'){
        cout << '#';
      }else{
        int count = 0;
        for(int k = 0; k < 8; k++){
          int x = j + xv.at(k);
          if(x < 0 || x >= W){
            continue;
          }
          int y = i + yv.at(k);
          if(y < 0 || y >= H){
            continue;
          }
          if(d[y][x] == '#'){
            count++;
          }
        }
        cout << count;
      }
      if(j == W-1){
        cout << endl;
      }
    }
  }
  
}
