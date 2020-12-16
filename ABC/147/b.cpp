#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  string S1 = S;
  reverse(S1.begin(), S1.end());
  string S2 = S1;
  int ans = 0;
  int sum = S2.size();
  for(int i = 0; i < sum; i++){
    if(S.at(i) != S2.at(i)){
      ans++;
    }
  }
  cout << ans/2 << endl;
}
