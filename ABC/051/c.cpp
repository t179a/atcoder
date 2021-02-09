#include <bits/stdc++.h>
using namespace std;

int main(){
  int sx, sy, tx, ty; cin >> sx >> sy >> tx >> ty;
  int dx = tx - sx;
  int dy = ty - sy;
  string ans = "";
  for(int i = 0; i < dx; i++){
    ans += "R";
  }
  for(int i = 0; i < dy; i++){
    ans += "U";
  }
  for(int i = 0; i < dx; i++){
    ans += "L";
  }
  for(int i = 0; i < dy; i++){
    ans += "D";
  }
  ans += "D";
  for(int i = 0; i < dx + 1; i++){
    ans += "R";
  }
  for(int i = 0; i < dy + 1; i++){
    ans += "U";
  }
  ans += "L";
  ans += "U";
  for(int i = 0; i < dx + 1; i++){
    ans += "L";
  }
  for(int i = 0; i < dy + 1; i++){
    ans += "D";
  }
  ans += "R";
  cout << ans << endl;
}
  
  
  
  
