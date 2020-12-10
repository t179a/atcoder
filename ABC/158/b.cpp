#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n, a, b;
  cin >> n >> a >> b;
  
  int64_t mod_ab = n % (a + b);
  int64_t div = n / (a + b);
  int64_t ans = a * div + min(mod_ab, a);
  cout << ans << endl;
}
