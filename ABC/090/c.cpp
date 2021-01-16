#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, M;
  cin >> N >> M;
  int len_min = min(N, M);
  int len_max = max(N, M);
  int64_t ans;
  if(N == M && N == 1){
    cout << 1 << endl;
    return 0;
  }
  if(len_min == 1){
    ans = max(0,len_max - 2);
  }else if(len_min == 2){
    ans = 0;
  }else{
    ans = (N-2) * (M-2);
  }
  cout << ans << endl;
}
