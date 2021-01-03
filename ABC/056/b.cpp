#include <bits/stdc++.h>
using namespace std;

int main(){
  int w, a, b;
  cin >> w >> a >> b;
  int n_min = min(a, b);
  int n_max = max(a, b);
  int ans = max(0,n_max - (n_min + w));
  cout << ans << endl;
}
