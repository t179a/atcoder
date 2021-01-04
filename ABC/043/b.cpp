#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len_s = s.size();
  string ans = "";
  for(int i = 0; i < len_s; i++){
    if(s.at(i) == '0'){
      ans += '0';
    }else if(s.at(i) == '1'){
      ans += '1';
    }else{
      int len_a = ans.size();
      if(len_a == 0){
        continue;
      }else{
        ans = ans.substr(0,len_a - 1);
      }
    }
  }
  cout << ans << endl;
}
