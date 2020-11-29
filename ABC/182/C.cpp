#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int,int>;

const int INF = 1001001001;

int main(){
  string N;
  cin >> N;
  vector<int> c(3);
  int n = N.size();
  rep(i, n) c[(N[i] - '0') % 3]++;
  int sum = 0;
  rep(i, 3) sum += c[i] * i;
  int ans = INF;
  rep(i1, 3) rep(i2, 3) {
    if(i1 > c[1]) continue;
    if(i2 > c[2]) continue;
    if(i1 + i2 == n) continue;
    int nx = sum;
    nx -= (i1 * 1) + (i2 * 2);
    if(nx % 3 == 0) ans = min(ans, i1 + i2);
  }
  if(ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}
