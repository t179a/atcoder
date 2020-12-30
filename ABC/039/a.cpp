#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int ans = (A * B + B * C + C * A) * 2;
  cout << ans << endl;
}
