#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  for(int i = 0; i < N; ++i) cin >> d[i];
  
  int ans = 100000000;
  for(int i = 0 ; i < N; ++i) {
    int n = 0;
    while(d[i] % 2 == 0) {
      n++;
      d[i] = d[i]/2;
    }
    ans = min(ans, n);
  }
  cout << ans << endl;
}
