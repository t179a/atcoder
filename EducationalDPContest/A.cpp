#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];
int dp[100010];

int main () {
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> a[i];
  dp[0] = 0;
  dp[1] = a[1] - a[0] >= 0 ? a[1] - a[0] : a[0] - a[1];
  for (int i = 2; i < n; ++i) {
    int tmp1 = a[i] - a[i-1] >= 0 ? a[i] - a[i-1] : a[i-1] - a[i];
    int tmp2 = a[i] - a[i-2] >= 0 ? a[i] - a[i-2] : a[i-2] - a[i];
    dp[i] = min(dp[i-1] + tmp1, dp[i-2] + tmp2);
  }
  cout << dp[n-1] << endl;
}
    
  
