#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans;
  if(s == "AAA" || s == "BBB") {
    ans = "No";
  }else{
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
