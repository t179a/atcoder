#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d; cin >> a >> b >> c >> d;
  int ans = max(max(a - c, b - c), max(b - c, b - d));
  cout << ans << endl;
}
