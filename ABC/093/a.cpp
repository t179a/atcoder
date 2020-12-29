#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len_s = s.size();
  set<char> set_char;
  for(int i = 0; i < len_s; i++){
    set_char.insert(s.at(i));
  }
  string ans = "No";
  if(set_char.size() == 3){
    ans = "Yes";
  }
  cout << ans << endl;
}
