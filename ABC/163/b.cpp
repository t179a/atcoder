#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int sum = 0;
  for(int i = 0; i < m; i++ ) {
    int num;
    cin >> num;
    sum += num;
  }
  int ans;
  if(sum > n) {
    ans = -1;
  }else{
    ans = n - sum;
  };
  cout << ans << endl;
}
