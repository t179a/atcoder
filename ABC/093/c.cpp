#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int n_max = max(A, max(B, C));
  int n_min = min(A, min(B, C));
  int n_mid = A + B + C - n_max - n_min;
  int ans = 0;
  if((n_mid - n_min) % 2 == 0){
    ans = (n_mid - n_min)/2 + n_max - n_mid;
  }else{
    n_max++;
    n_mid++;
    ans = (n_mid - n_min)/2 + n_max - n_mid + 1;
  }
  cout << ans << endl;
}
