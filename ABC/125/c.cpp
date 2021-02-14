#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  vector<int64_t> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  
  vector<int64_t> S_left(N+1,0);
  vector<int64_t> S_right(N+1,0);
  for(int i = 0; i < N; i++){
    S_left.at(i + 1) = gcd(S_left.at(i), A.at(i));
  }
  for(int i = 0; i < N; i++){
    S_right.at(N-1-i) = gcd(S_right.at(N-i), A.at(N-1-i));
  }
  /*cout << "S_left" << endl;
  for(int i = 0; i < N+1; i++){
    cout << S_left.at(i) << " ";
  }
  cout << endl;
  cout << "S_right" << endl;
  for(int i = 0; i < N+1; i++){
    cout << S_right.at(i) << " ";
  }
  cout << endl;*/
  
  int64_t ans = -1;
  for(int i = 0;i < N; i++){
    int64_t gcd_i = gcd(S_left.at(i), S_right.at(i+1));
    //cout << gcd_i << endl;
    ans = max(ans, gcd_i);
  }
  cout << ans << endl;
}
    
