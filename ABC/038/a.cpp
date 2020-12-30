#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  string ans = "NO";
  if(S.at(len - 1) == 'T'){
    ans = "YES";
  }
  cout << ans << endl;
}
