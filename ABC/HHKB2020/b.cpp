#include<bits/stdc++.h>
using namespace std;

int main(){
  int H, W; cin >> H >> W;
  vector<string> vs(H);
  for(int i = 0; i < H; i++){
    cin >> vs.at(i);
  }
  int ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W-1; j++){
      if(vs.at(i).at(j) == '.' && vs.at(i).at(j+1) == '.'){
        ans++;
      }
    }
  }
  for(int i = 0; i < W; i++){
    for(int j = 0; j < H-1; j++){
      if(vs.at(j).at(i) == '.' && vs.at(j+1).at(i) == '.'){
        ans++;
      }
    }
  }
  cout << ans << endl;
  
}
  
