#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(N);
  rep(i, N) cin >> vec.at(i);
  
  int ans = 0;
  int min_n = 100000000;
  for(int i = 0; i < N; i++){
    if(vec.at(i) <= min_n){
      ans++;
      min_n = min(vec.at(i), min_n);
    }
  }
  cout << ans << endl;
}
