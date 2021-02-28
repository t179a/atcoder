#include <bits/stdc++.h>
using namespace std;

int64_t A, B, N;

int64_t calc(int64_t x){
  return ((A*x)/B - A * (x/B));
}
    
int main(){  
  cin >> A >> B >> N;
  int64_t p = N / B;
  int64_t ans;
  if(calc(B-1) < calc(2*B-1)){
    if(p == 0){
      ans = calc(N);
    }else{
      ans = calc(p * B -1);
    }
  }else{
    if(p == 0){
      ans = calc(N);
    }else{
      ans = calc(B-1);
    }
  }
  cout << ans << endl;
  
  
}
