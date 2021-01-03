#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();
  int num = len - 2;
  string ans = s.at(0) + to_string(num) + s.at(len-1);
  cout << ans << endl;
}
