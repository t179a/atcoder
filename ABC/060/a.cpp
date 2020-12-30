#include <bits/stdc++.h>
using namespace std;

int main(){
  string A, B, C;
  cin >> A >> B >> C;
  int lenA = A.size();
  int lenB = B.size();
  int lenC = C.size();
  string ans = "NO";
  if(A.at(lenA - 1) == B.at(0) && B.at(lenB - 1) == C.at(0)){
	ans = "YES";
  }
  cout << ans << endl;
}
  
