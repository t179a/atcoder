#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K, X, Y;
  cin >> N >> K >> X >> Y;
  int ans = X * min(N, K) + Y * max(N - K, 0);
  cout << ans << endl;
}
