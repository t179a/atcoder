#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  vector<int64_t> vec(5);
  for(int i = 0; i < 5; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  int64_t min_n = vec.at(0);
  int64_t div = N % min_n == 0 ? N/min_n : N/min_n + 1;
  int64_t ans = div + 4;
  cout << ans << endl;
}
