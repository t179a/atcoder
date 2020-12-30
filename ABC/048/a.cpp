#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  string ans = "ABC";
  ans.at(1) = s2.at(0);
  cout << ans << endl;
}
