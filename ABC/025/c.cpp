#include<bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> vvi;
int INF = 1000000007;

int b[2][3], c[3][2];
map<vvi, int> memo;
int calc_point(vvi field){
  int res = 0;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      if(field[i][j] == field[i+1][j]){
        res += b[i][j];
      }
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
      if(field[i][j] == field[i][j+1]){
        res += c[i][j];
      }
    }
  }
  return res;
}

int dfs(vvi field, int turn){
  if(turn == 9) return memo[field] = calc_point(field);
  if(memo.count(field)) return memo[field];
  int tm = turn % 2;
  int res = tm ? INF : -1;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(field[i][j] != -1) continue;
      vvi temp = field;
      temp[i][j] = tm;
      if(tm) res = min(res, dfs(temp, turn + 1));
      else res = max(res, dfs(temp, turn + 1));
    }
  }
  return memo[field] = res;
}

int main(){
  int sum = 0;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      cin >> b[i][j];
      sum += b[i][j];
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
      cin >> c[i][j];
      sum += c[i][j];
    }
  }
  vvi field(3, vector<int>(3,-1));
  int ans = dfs(field, 0);
  cout << ans << endl;
  cout << sum - ans << endl;
  return 0;
}
