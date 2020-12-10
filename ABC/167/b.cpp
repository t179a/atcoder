#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans = 0;
  for(int i = 0; i < k; i++) {
    if(a > 0) {
      ans++;
      a--;
    }else if(b > 0) {
      b--;
    }else if(c > 0){
      ans--;
      c--;
    }
  }
  cout << ans << endl;
}

