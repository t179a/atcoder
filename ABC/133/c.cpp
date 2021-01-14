#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t L, R;
  cin >> L >> R;
  int64_t d = R - L;
  int64_t ans = 1000000;
  if(d >= 2019){
    ans = 0;
    cout << ans << endl;
    return 0;
  }
  for(int64_t i = L; i <= R; i++){
    for(int64_t j = i+1; j <= R; j++){
      ans = min(i * j % 2019, ans);
    }
  }
  cout << ans << endl;
  
  
}
