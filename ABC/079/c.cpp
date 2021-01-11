#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> v(4);
  for(int i = 0; i < 4; i++){
    v.at(i) = s.at(i) - '0';
  }
  
  for(int i = 0; i < (1 << 3); i++){
    bitset<3> b(i);
    int sum = v.at(0);
    string ans = "";
    ans += (v.at(0) + '0');
    for(int j = 0; j < 3; j++){
      if(b.test(j)){
        sum += v.at(j+1);
        ans += "+";
        char c = '0' + v.at(j+1);
        ans += c;
      }else{
        sum -= v.at(j+1);
        ans += "-";
        char c = '0' + v.at(j+1);
        ans += c;
      }
    }
    if(sum == 7){
      ans += "=7";
      cout << ans << endl;
      return 0;
    }
  }
        
  
}
