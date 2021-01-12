#include <bits/stdc++.h>
using namespace std;

int main(){
  int H, W, K;
  cin >> H >> W >> K;
  char d1[H][W];
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> d1[i][j];
    }
  }
  int ans = 0;
  for(int i = 0; i < (1 << H); i++){
    for(int j = 0; j < (1 << W); j++){
      bitset<6> h(i);
      bitset<6> w(j);
      int sum = 0;
      for(int k = 0; k < H; k++){
        for(int l = 0; l < W; l++){
          if(h.test(k) || w.test(l)){
            continue;
          }else{
            if(d1[k][l] == '#'){
              sum++;
            }
          }
        }
      }
      if(sum == K){
        ans++;
      }
    }
  }
  cout << ans << endl;
}
