#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;
  
  string ans = "No";
  for(int i = 0; i <= X; i++){
    if((2 * i + 4 * (X - i)) == Y){
      ans = "Yes";
    }
  }
  cout << ans << endl;
}
