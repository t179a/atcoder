#include <bits/stdc++.h>
using namespace std;

int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  
  double ans = (sx * gy + sy * gx)/(sy + gy);
  
  
  printf("%.10f\n", ans);
  return 0;
  
}
