#include<bits/stdc++.h>
using namespace std;

int main(){
  int64_t a, b; cin >> a >> b;
  int64_t ans = 0;
  if(a == 1 || b == 1){
    ans = 1;
    cout << ans << endl;
    return 0;
  }
  int64_t odds = ((b + 1)/2) * ((a + 1)/2);
  int64_t even = (b / 2) * (a / 2);
  ans = odds + even;
  cout << ans << endl;
}
  
