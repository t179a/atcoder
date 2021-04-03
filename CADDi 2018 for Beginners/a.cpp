#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int len = S.size();
  int ans = 0;
  for(int i = 0; i < len; i++){
    if(S.at(i) == '2'){
      ans++;
    }
  }
  cout << ans << endl;
}
