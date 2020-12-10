#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int64_t ans = 0;
  for(int i = 0; i <= n; i++) {
    if((i % 3 != 0) && (i % 5 != 0)){
      ans += i;
    }
  }
  cout << ans << endl;
}
