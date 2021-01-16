#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  int ans = 0;
  for(int i = 0; i < len-1; i++){
    if(S.at(i) != S.at(i+1)){
      ans++;
    }
  }
  cout << ans << endl;
}
