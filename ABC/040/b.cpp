#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int sq = sqrt(n);
  int ans = n - (sq * sq);
  for(int i = 1; i <= 2 * sq; i++){
    for(int j = 1; j <= 2 * sq; j++){
      if(i * j <= n){
        ans = min(ans, n - (i * j) + abs(i - j));
      }
    }
  }
  cout << ans << endl;
}
