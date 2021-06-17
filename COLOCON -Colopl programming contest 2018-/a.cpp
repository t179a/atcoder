#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B; string S;
  cin >> A >> B >> S;
  int len_S = S.size();
  string ans = "NO";
  if(A <= len_S && len_S <= B){
    ans = "YES";
  }
  cout << ans << endl;
}
