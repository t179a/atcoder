#include <bits/stdc++.h>
using namespace std;

int main(){
  double xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  xb -= xa;
  xc -= xa;
  yb -= ya;
  yc -= ya;
  double ans = abs((xb * yc) - (yb * xc))/2.0;
  printf("%.10lf\n", ans);
}
  
