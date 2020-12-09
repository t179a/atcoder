#include <bits/stdc++.h>
using namespace std;

int main() {
  double N, X, T;
  cin >> N >> X >> T;
  int tmp = ceil(N/X);
  int ans = tmp * T;
  
  cout << ans << endl;
}
