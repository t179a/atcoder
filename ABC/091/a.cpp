#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  string ans = "Yes";
  if(A + B < C){
	ans = "No";
  }
  cout << ans << endl;
}
