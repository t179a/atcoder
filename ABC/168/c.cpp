#include <bits/stdc++.h>
using namespace std;

int main(){
  double A, B, H, M;
  cin >> A >> B >> H >> M;
  double hrad = (H * 60 + M )/720 * 2 * M_PI;
  double mrad = M/60 * 2 * M_PI;
  double d = abs(hrad - mrad);
  double d_min = min(d, 2 * M_PI - d);
  double ans =sqrt(pow(A,2) + pow(B,2) - 2*A*B*cos(d_min));
  printf("%.10lf\n", ans);
}
