#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t a, b, c;
  cin >> a >> b >> c;
  vector<int64_t> vec = {a, b, c};
  int num = 1000000007;
  int64_t ans = 1;
  for(int i = 0; i < 3; i++){
    ans *= vec.at(i);
    ans %= num;
  }
  cout << ans << endl;
  
}
