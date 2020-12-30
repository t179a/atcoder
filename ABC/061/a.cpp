#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  string ans = "No";
  if(C >= A && C <= B){
	ans = "Yes";
  }
  cout << ans << endl;
}
