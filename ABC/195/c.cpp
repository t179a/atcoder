#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  string S = to_string(N);
  int len = S.size();
  int64_t ans = 0;
  if(len < 4){
    cout << 0 << endl;
    return 0;
  }
  for(int i = 4; i < len; i++){
    ans += 9000 * pow(10, i - 4) * ((i-1) / 3);
  }
  ans += (N - pow(10, len-1) + 1) * ((len - 1)/3);
  cout << ans << endl;
  
}
