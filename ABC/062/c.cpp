#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t H, W; cin >> H >> W;
  int64_t ans = 1000000000000000;
  if(H % 3 == 0 || W % 3 == 0){
    cout << 0 << endl;
    return 0;
  }
  for(int i = 1; i < W; i++){
    int64_t s1 = H * i;
    int64_t longer = max(W - i, H);
    int64_t shorter = min(W - i, H);
     if(longer % 2 == 0 || shorter % 2 == 0){
      int64_t s2 = longer * shorter / 2;
      int64_t s3 = longer * shorter / 2;
      ans = min(ans,max(s1, max(s2, s3)) - min(s1, min(s2, s3)));
    }else{
      int64_t s2 = (longer - (longer/2)) * (shorter);
      int64_t s3 = (longer/2) * (shorter);
      ans = min(ans,max(s1, max(s2, s3)) - min(s1, min(s2, s3)));
    }
  }
  for(int i = 1; i < H; i++){
    int64_t s1 = W * i;
    int64_t longer = max(H - i, W);
    int64_t shorter = min(H - i, W);
    if(longer % 2 == 0 || shorter % 2 == 0){
      int64_t s2 = longer * shorter / 2;
      int64_t s3 = longer * shorter / 2;
      ans = min(ans,max(s1, max(s2, s3)) - min(s1, min(s2, s3)));
    }else{
      int64_t s2 = (longer - (longer/2)) * (shorter);
      int64_t s3 = (longer/2) * (shorter);
      ans = min(ans,max(s1, max(s2, s3)) - min(s1, min(s2, s3)));
    }
  }
  cout << ans << endl;
}
  
