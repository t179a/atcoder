#include<bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  for(int i = 0; i < 8; i++){
    int t; cin >> t;
    ans = max(ans, t);
  }
  cout << ans << endl;
}
