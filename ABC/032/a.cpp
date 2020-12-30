#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, n;
  cin >> a >> b >> n;
  int lcm_ab = lcm(a, b);
  int ans;
  if(n % lcm_ab == 0){
    ans = lcm_ab * (n / lcm_ab);
  }else{
    ans = lcm_ab * (n / lcm_ab + 1);
  }
  cout << ans << endl;
}
  
