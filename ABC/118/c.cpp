#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++) cin >> A.at(i);
  sort(A.begin(), A.end());
  int ans = A.at(0);
  for(int i = 1; i < N; i++){
    ans = gcd(A.at(i), ans);
  }
  cout << ans << endl;
  
}
  
  
  
  
