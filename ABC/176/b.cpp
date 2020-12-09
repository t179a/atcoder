#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int64_t num = S.size();
  int64_t sum = 0;
  for(int i = 0; i < num; i++) {
    sum += (int)(S.at(i) - '0');
  }
  string ans;
  if(sum % 9 == 0 ) {
    ans = "Yes";
  }else{
    ans = "No";
  }
  
  cout << ans << endl;
}
