#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b; cin >> n >> a >> b;
  int ans = max(0, a + b - n);
  cout << ans << endl;
}
  
