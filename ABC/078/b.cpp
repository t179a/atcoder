#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, Y, Z;
  cin >> X >> Y >> Z;
  X -= Z;
  int ans = X /(Y + Z);
  cout << ans << endl;
}
