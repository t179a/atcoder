#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  cin >> S >> T;
  int len = S.size();
  string ans = "No";
  for(int i = 0; i < len; i++){
    char c = S.back();
    S = c + S.substr(0,len - 1);
    if(S == T){
      ans = "Yes";
    }
  }
  cout << ans << endl;
}
