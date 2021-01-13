#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int64_t ans = 1;
  for(int i = 0; i < N; i++){
    ans = lcm(ans, vec.at(i));
  }
  cout << ans << endl;
}
