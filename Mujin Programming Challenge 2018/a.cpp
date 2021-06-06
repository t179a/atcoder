#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string ans = "No";
  if(S.substr(0, 5) == "MUJIN"){
    ans = "Yes";
  }
  cout << ans << endl;
}
