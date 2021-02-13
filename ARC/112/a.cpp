#include <bits/stdc++.h>
using namespace std;

int main(){
  int T; cin >> T;
  for(int i = 0; i < T; i++){
    int64_t L, R; cin >> L >> R;
    if(2 * L > R){
      cout << 0 << endl;
      continue;
    }else{
      int64_t ans = (R - 2 * L + 2) * ( R - 2 * L + 1)/2;
      cout << ans << endl;
    }
  }
  
  
  
   
}
  
