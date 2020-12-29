#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A;
  cin >> N >> A;
  string ans = "No";
  if(N % 500 <= A){
	ans = "Yes";
  }
  cout << ans << endl;
}
