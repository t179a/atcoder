#include <bits/stdc++.h>
using namespace std;

int main() {
  double N, D;
  cin >> N >> D;
  int64_t ans = 0;
  for(int i = 0; i < N; i++) {
    int64_t x, y;
    cin >> x >> y;
    double d = sqrt(x*x + y*y);
    if(d <= D){
      ans++;
    }
  }
  
  cout << ans << endl;
}
    
