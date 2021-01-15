#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, M;
  cin >> N >> M;
  int64_t diff = abs(N - M);
  if(diff >= 2){
    cout << 0 << endl;
    return 0;
  }
  int64_t ans;
  int64_t n_dog = 1;
  int64_t n_monkey = 1;
  for(int i = 0; i < N; i++){
    n_dog *= (N-i);
    n_dog %= 1000000007;
  }
  for(int i = 0; i < M; i++){
    n_monkey *= (M-i);
    n_monkey %= 1000000007;
  }
  if(diff == 1){
    ans = n_dog * n_monkey % 1000000007;
  }else if(diff == 0){
    ans = n_dog * n_monkey * 2 % 1000000007;
  }
  cout << ans << endl;
}
    
