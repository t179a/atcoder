#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int ans = 0;
  int len = S.size();
  for(int i = 0; i < len; i++){
    if(S.at(i) == '1'){
      ans++;
    }
  }
  cout << ans << endl;
}
