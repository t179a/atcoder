#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();
  set<int> set_n;
  for(int i = 0; i < len; i++){
    set_n.insert(s.at(i));
  }
  string ans = "DIFFERENT";
  int sum_n = set_n.size();
  if(sum_n == 1){
    ans = "SAME";
  }
  cout << ans << endl;
}
