#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  string ans = "";
  int len = s.size();
  int count = 1;
  char pre_c = s.at(0);
  for(int i = 1; i < len; i++){
    if(s.at(i) == pre_c){
      count++;
      if(i == len-1){
        ans += pre_c + to_string(count);
      }
    }else if(s.at(i) != pre_c){
      string sp = pre_c + to_string(count);
      ans += sp;
      count = 1;
      pre_c = s.at(i);
      if(i == len-1){
        ans += pre_c + to_string(count);
      }
    }
  
  }
  cout << ans << endl;
}
      
