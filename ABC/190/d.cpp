#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  N *= 2;
  int64_t ans = 0;
  for(int64_t i = 1; i * i <= N; i++){
    if(N % i != 0) continue;
    int64_t mod = N / i;
    int64_t sum = mod - i + 1;
    if(sum % 2 == 0){
      ans += 2;
      //cout << i << endl;
    }
  }
  cout << ans << endl;
}
