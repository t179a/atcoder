#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  sort(A.begin(), A.end(), greater<int64_t>());
  
  int64_t ans = A.at(0);
  for(int i = 1; i < N-1; i++){
    ans += A.at((i+1)/2);
  }
  cout << ans << endl;
}
  
