#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, S, T, W;
  cin >> N >> S >> T >> W;
  int ans = 0;
  if(W >= S && W <= T){
    ans++;
  }
  for(int i = 0; i < N-1; i++){
    int diff;
    cin >> diff;
    W += diff;
    if(W >= S && W <= T){
      ans++;
    }
  }
  cout << ans << endl;
}
