#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
  int p = 0;
  while(b != 0){
    p += b % a;
    b /= a;
  }
  return p;
}

int main(){
  int N; cin >> N;
  int ans = N;
  for(int i = 0; i <= N; i++){
    int s = sum(6, i) + sum(9, N-i);
    ans = min(ans, s);
  }
  cout << ans << endl;
}
  
  
