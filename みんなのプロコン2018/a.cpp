#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string ans = "NO";
  if(S.substr(0, 3) == "yah" && (S.at(3) == S.at(4))){
    ans = "YES";
  }
  cout << ans << endl;
}
