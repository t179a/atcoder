#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  set<int64_t> S;
  for(int64_t i = 2; i * i <= N; i++){
    int64_t p = i * i;
    while(p <= N && !(S.count(p))){
      S.insert(p);
      p *= i;
    }
  }
  int64_t sum = (int64_t) S.size();
  int64_t ans = N - sum;
  cout << ans << endl;
}
