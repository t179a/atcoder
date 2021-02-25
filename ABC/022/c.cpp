#include<bits/stdc++.h>
using namespace std;

int64_t INF = 1LL << 60;

int main(){
  int64_t N, M; cin >> N >> M;
  vector<pair<int64_t, int64_t>> next_0;//vertex, length
  vector<vector<int64_t>> dp(N, vector<int64_t>(N, INF));
  for(int i = 0; i < M; i++){
    int64_t u, v, l;
    cin >> u >> v >> l;
    u--; v--;
    if(u == 0){
      next_0.emplace_back(v, l);
    }else{
      dp[u][v] = l;
      dp[v][u] = l;
    }
  }
  
  for(int k = 0; k < N; k++){
    for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }
  
  int64_t ans = INF;
  for(int i = 0; i < (int) next_0.size(); i++){
    for(int j = i+1; j < (int) next_0.size(); j++){
      int64_t v1 = next_0[i].first;
      int64_t v2 = next_0[j].first;
      int64_t len = dp[v1][v2];
      len += next_0[i].second + next_0[j].second;
      ans = min(ans, len);
    }
  }
  if(ans == INF){
    cout << -1 << endl;
  }else{
    cout << ans << endl;
  }
}
  
