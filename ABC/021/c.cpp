#include <bits/stdc++.h>
using namespace std;

int INF = 1000000007;

int main(){
  int N, s, g, M;
  cin >> N >> s >> g >> M;
  s--; g--;
  vector<vector<int>> graph(N, vector<int>());
  for(int i = 0; i < M; i++){
    int x, y; cin >> x >> y;
    x--; y--;
    graph.at(x).push_back(y);
    graph.at(y).push_back(x);
  }
  vector<int> dist(N, -1);
  vector<int64_t> dp(N, 0);
  
  queue<int> que;
  que.push(s);
  dist.at(s) = 0;
  dp.at(s) = 1;
  
  while(!que.empty()){
    int c = que.front();
    que.pop();
    for(int p = 0; p < (int) graph.at(c).size(); p++){
      int to = graph.at(c).at(p);
      if(dist.at(to) == -1){
        dist.at(to) = dist.at(c) + 1;
        dp.at(to) += dp.at(c);
        dp.at(to) %= INF;
        que.push(to);
      }else{
        if(dist.at(to) == dist.at(c) + 1){
          dp.at(to) += dp.at(c);
          dp.at(to) %= INF;
        }
      }
    }
  }
  cout << dp[g] << endl;
}
  
    
  
