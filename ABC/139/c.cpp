#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int ans = 0;
  int sum_tmp = 0;
  for(int i = 0; i < N-1; i++){
    if(vec.at(i) >= vec.at(i+1)){
      sum_tmp++;
      ans = max(ans, sum_tmp);
    }else{
      sum_tmp = 0;
    }
  }
  cout << ans << endl;
}
  
