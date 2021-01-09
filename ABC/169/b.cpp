#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    if(vec.at(i) == 0){
      cout << 0 << endl;
      return 0;
    }
  }
  int64_t ans = 1;
  for(int i = 0; i < N; i++){
    if(ans <= 1000000000000000000/vec.at(i)){
      ans *= vec.at(i);
    }else{
      cout << -1 << endl;
      return 0;
    }
  }
  cout << ans << endl;
}
