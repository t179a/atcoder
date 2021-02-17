#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A; cin >> N >> A;
  vector<int> X(N+1);
  for(int i = 1; i <= N; i++){
    cin >> X.at(i);
  }
  
  int64_t dp[51][51][2700];
  memset(dp, 0, sizeof dp);
  dp[0][0][0] = 1;
  for(int j = 1; j <= N; j++){
    for(int k = 0; k <= N; k++){
      for(int s = 0; s <= 51*51; s++){
        if(s < X[j]){
          dp[j][k][s] = dp[j-1][k][s];
        }else if(X[j] <= s && 1 <= k){
          dp[j][k][s] = dp[j-1][k][s] + dp[j-1][k-1][s-X[j]];
        }
      }
    }
  }
  int64_t ans = 0;
  for(int i = 1; i <= N; i++){
    ans += dp[N][i][i*A];
  }
  cout << ans << endl;
}
