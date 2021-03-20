#include <bits/stdc++.h>
using namespace std;

int main(){
  string X; cin >> X;
  int len = X.size();
  string ans = "";
  for(int i = 0; i < len; i++){
    if(X.at(i) == '.'){
      break;
    }else{
      ans += X.at(i);
    }
  }
  cout << ans << endl;
}
