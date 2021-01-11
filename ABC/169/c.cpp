#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A;
  string S;
  cin >> A >> S;
  S.erase(1,1);
  int B = stoi(S);
  int64_t ans = A * B / 100;
  cout << ans << endl;
}
