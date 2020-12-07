#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;
  string S;
  cin >> S;
  int ans = X;
  for(int i = 0; i < N; i++) {
    if(S.at(i) == 'o') {
      ans++;
    }
    else if(S.at(i) == 'x' && ans > 0) {
      ans--;
    }
  }
  
  cout << ans << endl;
}
  
