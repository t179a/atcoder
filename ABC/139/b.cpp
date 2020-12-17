#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int ans = 0;
  if(B == 1){
    cout << ans << endl;
    return 0;
  }
  int sum = 1;
  for(int i = 1; i < 20; i++){
    sum += A - 1;
    if(sum >= B){
      ans = i;
      cout << ans << endl;
      return 0;
    }
  }
}
