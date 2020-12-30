#include <bits/stdc++.h>
using namespace std;

int main(){
  int W, H;
  cin >> W >> H;
  string ans;
  if(W/4 == H/3){
    ans = "4:3";
  }else if(W/16 == H/9){
    ans = "16:9";
  }
  cout << ans << endl;
}
