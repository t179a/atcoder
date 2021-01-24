#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> h(N);
  for(int i = 0; i < N; i++) cin >> h.at(i);
  vector<vector<int>> t(N, vector<int>());
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    t.at(a).push_back(b);
    t.at(b).push_back(a);
  }
  int ans = 0;
  for(int i = 0; i < N; i++){
    int hi = h.at(i);
    int len = t.at(i).size();
    int sum = 0;
    for(int j = 0; j < len; j++){
      if(hi > h.at(t.at(i).at(j))) sum++;
    }
    if(sum == len) ans++;
  }
  cout << ans << endl;
}
