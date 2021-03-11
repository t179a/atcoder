#include<bits/stdc++.h>
using namespace std;

int main(){
  int64_t H; cin >> H;
  int64_t ans = 0;
  int64_t num = 1;
  int64_t total = log2(H);
  for(int i = 0; i <= total; i++){
    ans += num;
    num *= 2;
  }
  cout << ans << endl;
}
