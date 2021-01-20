#include <bits/stdc++.h>
using namespace std;

int main(){
  int R, C;
  cin >> R >> C;
  int sy, sx, gy, gx;
  cin >> sy >> sx >> gy >> gx;
  sy--;sx--;gy--;gx--;
  vector<string> vs(R);
  for(int i = 0; i < R; i++){
    cin >> vs.at(i);
  }
  int dy[4] = {0, 1, 0, -1};
  int dx[4] = {1, 0, -1, 0};
  vector<vector<int>> vv(R, vector<int>(C, -1));
  queue<pair<int, int>> que;
  vv[sy][sx] = 0;
  pair<int, int> p1 = make_pair(sy, sx);
  que.push(p1);
  
  while(!que.empty()){
    pair<int, int> p2 = que.front();
    int y1 = p2.first;
    int x1 = p2.second;
    que.pop();
    
    for(int i = 0; i < 4; i++){
      int y = y1 + dy[i];
      int x = x1 + dx[i];
      if(y < 0 || y >= R || x < 0 || x >= C){
        continue;
      }
      if(vs[y][x] == '#'){
        continue;
      }
      if(vv[y][x] != -1){
        continue;
      }
      vv[y][x] = vv[y1][x1] + 1;
      pair<int, int> p3 = make_pair(y, x);
      que.push(p3);
    }
  }
  cout << vv[gy][gx] << endl;
}
  
  
