#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> vec(M);
  if(N >= M){
    cout << 0 << endl;
    return 0;
  }
  
  for(int i = 0; i < M; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  vector<int> diff(M-1);
  int sum_diff = 0;
  for(int i = 0; i < M-1; i++){
    diff.at(i) = vec.at(i+1) - vec.at(i);
    sum_diff += diff.at(i);
  }
  sort(diff.begin(), diff.end(), greater<int>{});
  int ans = sum_diff;
  for(int i = 0; i < N - 1; i++){
    ans -= diff.at(i);
  }
  cout << ans << endl;
}
  
