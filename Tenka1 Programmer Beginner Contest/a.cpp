#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int len = S.size();
  if(len == 2){
    cout << S << endl;
    return 0;
  }else{
    string ans = "";
    for(int i = 2; i >= 0; i--){
      ans += S.at(i);
    }
    cout << ans << endl;
    return 0;
  }
}
