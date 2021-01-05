#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int ans = min(abs(a-b), 10-abs(a-b));
  cout << ans << endl;
}
