#include <bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string ans = "";
  for(int i = 0; i < (int) S.size(); i++){
    if(i == 0) continue;
    ans += S.at(i);
  }
  ans += S.at(0);
  cout << ans << endl;
  
}
  
