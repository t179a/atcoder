#include <bits/stdc++.h>
using namespace std;

int main(){
  string W;
  cin >> W;
  int len = W.size();
  set<char> sc = {'a', 'i', 'u', 'e', 'o'};
  string ans = "";
  for(int i = 0; i < len; i++){
    if(sc.count(W.at(i))){
      continue;
    }else{
      ans += W.at(i);
    }
  }
  cout << ans << endl;
}
