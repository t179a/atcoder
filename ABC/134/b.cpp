#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;
  int ans;
  if(N % (2*D+1) == 0){
    ans = N/(2*D+1);
  }else{
    ans = N/(2*D+1) +1;
  }
  cout << ans << endl;
}
