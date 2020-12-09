#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  int nums, numt;
  nums = S.size();
  numt = T.size();
  int ans = 1001;
  for(int i = 0; i <= nums - numt; i++){
    int sum = 0;
    for(int j = 0; j < numt; j++) {
      if(S.at(i + j) != T.at(j)) {
        sum++;
      }
    }
    ans = min(ans, sum);
  }
  
  cout << ans << endl;
}
    
