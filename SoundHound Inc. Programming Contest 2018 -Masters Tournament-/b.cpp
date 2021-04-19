#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; int W; cin >> S >> W;
  int len = S.size();
  string ans = "";
  ans += S.at(0);
  for(int i = W; i < len; i+= W){
    ans += S.at(i);
  }
  cout << ans << endl;
}
