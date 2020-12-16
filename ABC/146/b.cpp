#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  string ans = "";
  int sum = S.size();
  
  for(int i = 0; i < sum; i++){
    int c_num = int(S.at(i)) + N ;
    if(c_num > 'Z'){
      c_num -= 26;
    }
    char c_char = char(c_num);
    ans += c_char;
  }
  cout << ans << endl;
}
