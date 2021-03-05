#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<vector<int64_t>> dp(N+1, vector<int64_t>(2, 0));
  dp[0][0] = 1;
  dp[0][1] = 1;
  for(int i = 1; i < N+1; i++){
    string S; cin >> S;
    if(S == "AND"){
      dp[i][0] = dp[i-1][0];
      dp[i][1] = dp[i-1][0] + dp[i-1][1] * 2;
    }else{
      dp[i][0] = dp[i-1][0] * 2 + dp[i-1][1] * 1;
      dp[i][1] = dp[i-1][1] * 1;
    }
  }
  cout << dp[N][0] << endl;
}
