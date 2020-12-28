#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, X;
  cin >> A >> B >> X;
  string ans = "NO";
  if(X >= A && A+B >= X){
	ans = "YES";
  }
  cout << ans << endl;
}
