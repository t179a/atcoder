#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  int64_t d_min = 100000000000000;
  for(int i = 1; i <= sqrt(N); i++){
    if(N % i == 0){
      int64_t mod = N/i;
      d_min = min(d_min, i + mod);
    }
  }
  int64_t ans = d_min - 2;
  cout << ans << endl;
}
  
