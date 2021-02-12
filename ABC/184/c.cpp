#include<bits/stdc++.h>
using namespace std;

int main(){
  int r1,c1,r2,c2; cin >> r1 >> c1 >> r2 >> c2;
  r2 -= r1; c2 -= c1;
  
  int ans;
  if(r2 == 0 && c2 == 0){
    ans = 0;
  }else if(abs(r2) == abs(c2) || abs(r2) + abs(c2) <= 3){
    ans = 1;
  }else if(abs(r2) + abs(c2) <= 6 || abs(abs(r2) - abs(c2)) <= 3 || (abs(r2) + abs(c2))%2 == 0){
    ans = 2;
  }else{
    ans = 3;
  }
  cout << ans << endl;
}
  
  
