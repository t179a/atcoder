#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, x; cin >> n >> x;
  int ans = 540 * x + 525 * (n - x);
  cout << ans << endl;
}
