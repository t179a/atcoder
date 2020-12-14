#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> vec(N);
  if(N <= K){
	cout << 0 << endl;
    return 0;
  }
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  for(int i = 0; i < N - K; i++){
	ans += vec.at(i);
  }
  cout << ans << endl;
}
  
