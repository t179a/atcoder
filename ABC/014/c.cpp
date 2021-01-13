#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int d[1000002];
  for(int i = 0; i < 1000002; i++){
    d[i] = 0;
  }
  for(int i = 0; i < N; i++){
    int a, b;
    cin >> a >> b;
    d[a]++;
    d[b+1]--;
  }
  int sum = 0;
  int ans = 0;
  for(int i = 0; i < 1000002; i++){
    sum += d[i];
    ans = max(sum, ans);
  }
  cout << ans << endl;
}
