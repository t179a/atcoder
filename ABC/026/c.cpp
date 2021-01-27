#include <bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>> &B, int n){
  if((int) B.at(n).size() == 0) return 1;
  if((int) B.at(n).size() == 1) return 2 * dfs(B, B.at(n).at(0)) + 1;
  int len = B.at(n).size();
  vector<int> v(len);
  for(int i = 0; i < len; i++){
    v.at(i) = dfs(B, B.at(n).at(i));
  }
  sort(v.begin(), v.end());
  return v.at(0) + v.at((int)B.at(n).size()-1) + 1;
}

int main(){
  int N;
  cin >> N;
  vector<vector<int>> B(N, vector<int>());
  for(int n = 1; n < N; n++){
    int boss;
    cin >> boss;
    boss--;
    B.at(boss).push_back(n);
  }
  int ans = dfs(B, 0);
  cout << ans << endl;
}
