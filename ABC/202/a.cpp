#include<bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  for(int i = 0; i < 3; i++){
    int n; cin >> n;
    ans += 7 - n;
  }
  cout << ans << endl;
}
