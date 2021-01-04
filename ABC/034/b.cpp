#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans;
  if(n % 2 == 0){
    ans = n - 1;
  }else{
    ans = n + 1;
  }
  cout << ans << endl;
}
