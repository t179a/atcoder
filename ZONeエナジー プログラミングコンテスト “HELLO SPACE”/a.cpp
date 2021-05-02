#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int ans = 0;
  int len = S.size();
  for(int i = 0; i < len -3; i++){
    if(S.at(i) == 'Z' && S.at(i + 1) == 'O' && S.at(i + 2) == 'N' && S.at(i + 3) == 'e'){
      ans++;
    }
  }
  cout << ans << endl;
}
