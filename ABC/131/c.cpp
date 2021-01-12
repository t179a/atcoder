#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A, B, C, D;
  cin >> A >> B >> C >> D;
  int64_t cd_lcm = lcm(C, D);
  int64_t sum_c = B/C - (A-1)/C;
  int64_t sum_d = B/D - (A-1)/D;
  int64_t sum_cd = B/cd_lcm - (A-1)/cd_lcm;
  int64_t ans = (B-A+1) - sum_c - sum_d + sum_cd;
  cout << ans << endl;
}
