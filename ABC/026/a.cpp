#include <bits/stdc++.h>
using namespace std;

int main(){
  int A;
  cin >> A;
  int ans = 0;
  for(int i = 1; i < A; i++){
	ans = max(ans, i * (A - i));
  }
  cout << ans << endl;
}
