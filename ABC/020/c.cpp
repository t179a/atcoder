#include<bits/stdc++.h>
using namespace std;

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef pair<int,int> pint;
int64_t INF = 1LL<<60;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int H, W; 
int64_t T; 
int sx, sy, gx, gy;
string str[21];
int64_t dp[21][21];

int64_t calc(int64_t x){
  for(int i = 0; i < 21; i++){
    for(int j = 0; j < 21; j++){
      dp[i][j] = INF;
    }
  }
  
  dp[sx][sy] = 0;
  priority_queue<pair<int64_t, pint>, vector<pair<int64_t, pint>>, greater<pair<int64_t, pint>>> que;
  que.push(make_pair(0, pint(sx, sy)));
  while(!que.empty()){
    int cx = que.top().second.first;
    int cy = que.top().second.second;
    int64_t cdp = que.top().first;
    que.pop();
    if(cdp > dp[cx][cy]) continue;
    for(int m = 0; m < 4; m++){
      int nx = cx + dx[m];
      int ny = cy + dy[m];
      if(nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      int64_t ndp = cdp;
      if(str[nx][ny] == '.') ndp += 1;
      else if(str[nx][ny] == '#') ndp += x;
      //cout << "dp[gx][gy] : " << dp[gx][gy] << endl;
      if(chmin(dp[nx][ny], ndp)){
        que.push(make_pair(ndp, pint(nx,ny)));
      }
    }
  }
  return dp[gx][gy];
}



int main(){
  cin >> H >> W >> T;
  for(int i = 0; i < H; i++){
    cin >> str[i];
  }
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(str[i][j] == 'S'){
        sx = i, sy = j;
      }
      if(str[i][j] == 'G'){
        gx = i, gy = j, str[gx][gy] = '.';
      }
    }
  }
  //cout <<"sx " << sx << "sy " << sy << "gx : " << gx << " gy : " << gy << endl;
  int64_t low = 1, hi = T;
  while(hi - low > 1){
    int64_t mid = (low + hi)/2;
    //cout << mid << ": " << calc(mid) << endl;
    if(calc(mid) > T) hi = mid;
    else low = mid;
  }
  cout << low << endl;
}
    
    
  
