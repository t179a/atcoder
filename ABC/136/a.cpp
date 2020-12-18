#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int ans = max(C-A+B, 0);
  cout << ans << endl;
}
