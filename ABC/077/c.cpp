#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> A(N), B(N), C(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i); 
  }
  sort(A.begin(), A.end());
  for(int i = 0; i < N; i++){
    cin >> B.at(i);
  }
  for(int i = 0; i < N; i++){
    cin >> C.at(i); 
  }
  sort(C.begin(), C.end());
  
  int64_t ans = 0;
  
  for(int i = 0; i < N; i++){
    int b_key = B.at(i);
    auto a_index = lower_bound(A.begin(), A.end(), b_key);
    auto c_index = upper_bound(C.begin(), C.end(), b_key);
    int64_t a = a_index - A.begin();
    int64_t c = c_index - C.begin();
    ans += (a) * (N - c);
  }
  cout << ans << endl;
}
    
    
    
