#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int sum = s.size();
  string ans = "";
  for(int i = 0; i < sum; i++){
    if(s.at(i) == '9'){
      ans += '1';
    }else{
      ans += '9';
    }
  }
  cout << ans << endl;
}
