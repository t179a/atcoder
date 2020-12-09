#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int64_t> vec(4);
  vec[0] = a * c;
  vec[1] = a * d;
  vec[2] = b * c;
  vec[3] = b * d;
  
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  int64_t ans = vec[0];
  
  cout << ans << endl;
  return 0;
}
