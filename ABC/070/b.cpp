#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int ans = max(min(d, b) - max(a, c), 0);
  cout << ans << endl;
}
