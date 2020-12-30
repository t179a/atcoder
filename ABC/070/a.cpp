#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string ans = "No";
  if(s.at(0) == s.at(2)){
    ans = "Yes";
  }
  cout << ans << endl;
}
