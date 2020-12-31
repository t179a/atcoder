#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, D, x;
  cin >> r >> D >> x;
  
  for(int i = 0; i < 10; i++){
    int ans = r * x - D;
    cout << ans << endl;
    x = ans;
  }
}
