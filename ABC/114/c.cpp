#include <bits/stdc++.h>
using namespace std;

void dfs(int64_t n, int c, int64_t &m, int64_t &sum){
  if(n > m) return;
  if(c == 0x111) sum++;
  dfs(n * 10 + 3, c | 0x001, m, sum);
  dfs(n * 10 + 5, c | 0x010, m, sum);
  dfs(n * 10 + 7, c | 0x100, m, sum);
}

int main(){
  int64_t N;
  cin >> N;
  int64_t ans = 0;
  dfs(0, 0, N, ans);
  cout << ans << endl;
}
