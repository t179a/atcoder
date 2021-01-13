#include <bits/stdc++.h>
using namespace std;

int main(){
  double tx_a, ty_a, tx_b, ty_b, T, V;
  int n;
  cin >> tx_a >> ty_a >> tx_b >> ty_b >> T >> V >> n;
  double d_max = T * V;
  string ans = "NO";
  for(int i = 0; i < n; i++){
    double x, y;
    cin >> x >> y;
    double d1 = sqrt(pow(x-tx_a, 2) + pow(y-ty_a, 2));
    double d2 = sqrt(pow(tx_b-x, 2) + pow(ty_b-y, 2));
    if((d1 + d2) <= d_max){
      ans = "YES";
    }
  }
  cout << ans << endl;
}
    
