#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, a, b;
  cin >> x >> a >> b;
  int ra = abs(x - a);
  int rb = abs(x - b);
  char ans = 'A';
  if(rb < ra){
    ans = 'B';
  }
  cout << ans << endl;
}
