#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int mod_ab = a % b;
  int ans = 0;
  if(mod_ab != 0){
	ans = b - mod_ab;
  }
  cout << ans << endl;
}
