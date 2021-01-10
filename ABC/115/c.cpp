#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int64_t> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int64_t ans = 100000000000;
  sort(vec.begin(), vec.end());
  for(int i = 0; i < N-K+1; i++){
    int64_t a = i;
    int64_t b = i+K-1;
    ans = min(vec.at(b) - vec.at(a), ans);
  }
  cout << ans << endl;
}
  
    
