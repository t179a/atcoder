#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, x;
  cin >> N >> x;
  vector<int> v(N);
  for(int i = 0; i < N; i++){
    cin >> v.at(i);
  }
  int64_t ans = 0;
  for(int i = 0; i < N-1; i++){
    int sum = v.at(i) + v.at(i+1);
    if(sum <= x){
      continue;
    }
    int p = min(v.at(i+1), sum - x);
    v.at(i+1) -= p;
    sum -= p;
    ans += p;
    if(sum <= x){
      continue;
    }
    v.at(i) -= (sum - x);
    ans += (sum - x);
  }
  cout << ans << endl;
    
    
    
}
    
    
    
