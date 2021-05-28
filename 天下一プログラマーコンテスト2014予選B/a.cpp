#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string orig = "HAGIYA";
  string alt = "HAGIXILE";
  int len = S.size();
  string ans = S;
  for(int i = 0; i < len - 5; i++){
    string p = S.substr(i, 6);
    if(p == orig){
      ans.erase(i, 6);
      ans.insert(i, alt);
      cout << ans << endl;
      return 0;
    }
  }
}
