#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, T;
  cin >> N >> T;
  vector<int64_t> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int64_t ans = 0;
  for(int i = 0; i < N-1; i++){
    if(vec.at(i) + T <= vec.at(i+1)){
      ans += T;
    }else{
      ans += vec.at(i+1) - vec.at(i);
    }
  }
  ans += T;
  cout << ans << endl;
}
