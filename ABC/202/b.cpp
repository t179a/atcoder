#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int len = S.size();
  string ans = "";
  for(int i = len-1; i >= 0; i--){
    if(S.at(i) == '6'){
      ans += '9';
    }else if(S.at(i) == '9'){
      ans += '6';
    }else{
      ans += S.at(i);
    }
  }
  cout << ans << endl;
}
