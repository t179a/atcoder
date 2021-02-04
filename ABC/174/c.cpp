#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;cin >> K;
  int64_t a = 7;
  if(a % K == 0){
    cout << 1 << endl;
    return 0;
  }
  for(int i = 0; i <= K; i++){
    a = 10 * a + 7;
    if(a % K == 0){
      cout << i+2 << endl;
      return 0;
    }
    a %= K;
  }
  cout << -1 << endl;
}
    
