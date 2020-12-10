#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string ans;
  if(a <= b){
    ans = "unsafe";
  }else{
	ans = "safe";
  }
  
  cout << ans << endl;
}
