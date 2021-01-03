#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int len_S = S.size();
  set<char> set_c;
  for(int i = 0; i < len_S; i++){
    set_c .insert(S.at(i));
  }
  int sum_set = set_c.size();
  string ans = "no";
  if(sum_set == len_S){
    ans = "yes";
  }
  cout << ans << endl;
}
  
