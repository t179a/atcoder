#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int ans = N + 1;
  if(ans == 13){
	ans %= 12;
  }
  cout << ans << endl;
}
