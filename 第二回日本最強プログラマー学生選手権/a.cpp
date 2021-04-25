#include<bits/stdc++.h>
using namespace std;

int main(){
  int X, Y, Z; cin >> X >> Y >> Z;
  int ans = 0;
  for(int i = 1000001; i >= 0; i--){
    if(X * i < Y * Z){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}
