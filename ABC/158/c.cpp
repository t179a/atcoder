#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int ans = -1;
  for(int i = 1; i < 1001; i++){
    int na = i * 8/100;
    int nb = i * 10/100;
    if(na == a && nb == b){
      cout << i << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
  
}
