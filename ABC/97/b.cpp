#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;
  int ans = 1;
  for(int i = 2; i < sqrt(x); i++){
    int n = i;
    while(n * i <= x){
      n *= i;
    }
    ans = max(n, ans);
  }
  cout << ans << endl;
}
