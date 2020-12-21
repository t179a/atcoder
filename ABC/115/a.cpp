#include <bits/stdc++.h>
using namespace std;

int main(){
  int D;
  cin >> D;
  string ans = "Christmas";
  for(int i = 0; i < 25-D; i++){
    ans += " Eve";
  }
  cout << ans << endl;
}
