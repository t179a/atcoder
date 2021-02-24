#include<bits/stdc++.h>
using namespace std;

int main(){
  string dir[16] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
 
  double p[12] = {0.25, 1.55, 3.35, 5.45, 7.95, 10.75, 13.85, 17.15, 20.75, 24.45, 28.45, 32.65};
  
  int deg; double dis; cin >> deg >> dis;
  deg *= 10;
  deg += 1125;
  deg /= 2250;
  deg %= 16;
  
  string ans1 = dir[deg];
  
  dis += 0.0001;
  dis /= 60;
  int it = lower_bound(p, p+12, dis) - p;
  if(it == 0) ans1 = "C";
  cout << ans1 << " " << it << endl;
}
