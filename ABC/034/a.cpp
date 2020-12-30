#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  string ans = "Worse";
  if(y - x > 0){
	ans = "Better";
  }
  cout << ans << endl;
}
