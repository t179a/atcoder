#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  int ans = 1;
  if(N % K == 0){
    ans = 0;
  }
  cout << ans << endl;
}
