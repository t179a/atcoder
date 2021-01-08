#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W;
  cin >> H >> W;
  vector<string> vec(H);
  for(int i = 0; i < H; i++){
    cin >> vec.at(i);
  }
  char d[H+2][W+2];
  for(int i = 0; i < H+2; i++){
    for(int j = 0; j < W+2; j++){
      d[i][j] = '#';
    }
  }
  for(int i = 1; i < H+1; i++){
    for(int j = 1; j < W+1; j++){
      d[i][j] = vec.at(i-1).at(j-1);
    }
  }
  for(int i = 0; i < H+2; i++){
    for(int j = 0; j < W+2; j++){
      cout << d[i][j];
      if(j == W+1){
        cout << endl;
      }
    }
  }
  
  
  
}
