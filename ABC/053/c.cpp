#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t x;
  cin >> x;
  int64_t ans = 0;
  int64_t remain11 = x / 11;
  int64_t mod11 = x % 11;
  if(mod11 > 6){
    ans += 2;
  }else if(mod11 > 0){
    ans++;
  }
  ans += remain11 * 2;
  cout << ans << endl;
}
