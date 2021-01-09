#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t a, b, x;
  cin >> a >> b >> x;

  int64_t ans;
  if(a == 0){
    ans = b/x + 1;
  }else{
    ans = b/x - (a-1)/x;
  }
  cout << ans << endl;
}
