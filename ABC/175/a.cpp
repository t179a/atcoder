#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int num = S.size();
  int ans = 0;
  int tmp = 0;
  for(int i = 0; i < num; i++) {
    if(S.at(i) == 'R') {
      tmp ++;
      ans = max(tmp, ans);  
    }else{
      tmp = 0;
    }
  }
  
  cout << ans << endl;
}
