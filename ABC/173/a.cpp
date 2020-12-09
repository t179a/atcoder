#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int mod_s = N % 1000;
  if(mod_s == 0) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 1000 - mod_s;
  
  cout << ans << endl;
}
