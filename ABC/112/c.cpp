#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> vx, vy, vh;
  int index = -1;
  for(int i = 0; i < N; i++){
    int64_t x, y, h;
    cin >> x >> y >> h;
    if(h > 0) index = i;
    vx.push_back(x);
    vy.push_back(y);
    vh.push_back(h);
  }
  int64_t cx = -1, cy = -1, ch = -1;
  for(int64_t x = 0; x <= 100; x++){
    for(int64_t y = 0; y <= 100; y++){
      int64_t H = vh.at(index) + abs(x - vx.at(index)) + abs(y - vy.at(index));
      bool ok = true;
      
      for(int64_t p = 0; p < N; p++){
        if(vh.at(p) > 0 && vh.at(p) != H - abs(x - vx.at(p)) - abs(y - vy.at(p))){
          ok = false;
        }
        if(vh.at(p) == 0 && H - abs(x - vx.at(p)) - abs(y - vy.at(p)) > 0){
          ok = false;
        }
      }
      if(ok){
        cx = x; cy = y; ch = H;
      }
    }
  }
  cout << cx << " " << cy << " " << ch << endl;
}
        
      
  
  
