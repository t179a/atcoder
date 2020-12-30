#include <bits/stdc++.h>
using namespace std;

int main(){
  int M, D;
  cin >> M >> D;
  string ans = "NO";
  if(M % D == 0){
	ans = "YES";
  }
  cout << ans << endl;
}
