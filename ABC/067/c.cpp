#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  vector<int64_t> vec(N);
  int64_t sum_all = 0;
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum_all += vec.at(i);
  }
  int64_t sum_x = 0;
  int64_t ans = 10000000000000000;
  for(int i = 0; i < N-1; i++){
    sum_x += vec.at(i);
    sum_all -= vec.at(i);
    ans = min(ans, abs(sum_x - sum_all));
  }
  cout << ans << endl;
}
  
