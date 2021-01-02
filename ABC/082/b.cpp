#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  sort(s.begin(), s.end());
  sort(t.begin(), t.end());
  reverse(t.begin(), t.end());
  string ans = "No";
  if(s < t){
    ans = "Yes";
  }
  cout << ans << endl;
}
