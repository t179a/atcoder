#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string ans = "No";
  if(S.at(0) == S.at(1) && S.at(1) != S.at(2) && S.at(2) == S.at(3)){
    ans = "Yes";
  }
  cout << ans << endl;
}
