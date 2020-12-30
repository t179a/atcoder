#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, g, b;
  cin >> r >> g >> b;
  int num = 100 * r + 10 * g + b;
  string ans = "NO";
  if(num % 4 == 0){
    ans = "YES";
  }
  cout << ans << endl;
}
