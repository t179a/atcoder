#include <bits/stdc++.h>
using namespace std;

int main(){
  double n, m;
  cin >> n >> m;
  if(n >= 12){
    n -= 12;
  }
  double hour = 360 * ((n/12) + (m/720));
  double minute = 360 * (m/60);
  double diff = max(hour,minute) - min(hour, minute);
  double ans = min(diff, 360-diff);
  cout << ans << endl;
}
  
  
