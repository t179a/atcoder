#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int nmod = N % 10;
  string ans;
  if(nmod == 3) {
    ans = "bon";
  }else if(nmod == 0 || nmod == 1 || nmod == 6 || nmod == 8) {
    ans = "pon";
  }else{
    ans = "hon";
  }
  cout << ans << endl;
}
