#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K; cin >> N >> K;
  vector<int> X(N);
  for(int i = 0; i < N; i++){
    cin >> X.at(i);
  }
  int ans = 1000000001;
  for(int i = 0; i < N - K + 1; i++){
    int left = X.at(i);
    int right = X.at(i + K -1);
    int sum = min(abs(left) + abs(left - right), abs(right) + abs(left-right));
    ans = min(sum, ans);
  }
  cout << ans << endl;
  
}
    
    
