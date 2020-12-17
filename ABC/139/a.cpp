#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  cin >> S >> T;
  int sum = S.size();
  int ans = 0;
  for(int i = 0; i < sum; i++){
    if(S.at(i) == T.at(i)){
	  ans++;
    }
  }
  cout << ans << endl;
}
