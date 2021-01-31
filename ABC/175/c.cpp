#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t X, K, D;
  cin >> X >> K >> D;
  X = abs(X);
  
  int64_t Q = X / D;
  int64_t ans;
  if(K <= Q){
    ans = X - (K * D);
  }else{
    int64_t mod = K - Q;
    if(mod % 2 == 0){
      ans = abs(X - (Q * D));
    }else{
      ans = abs(X -(Q+1)*D);
    }
  }
  cout << ans << endl;
}
