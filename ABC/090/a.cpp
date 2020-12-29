#include <bits/stdc++.h>
using namespace std;

int main(){
  string ans = "";
  for(int i = 0; i < 3; i++){
    string s;
    cin >> s;
    ans += s.at(i);
  }
  cout << ans << endl;
}
