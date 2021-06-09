#include<bits/stdc++.h>
using namespace std;

int main(){
  int64_t T, A, B, C, D; cin >> T >> A >> B >> C >> D;
  int64_t ans;
  if(T >= A + C ){
    ans = B + D;
  }else if(T >= C){
    ans = D;
  }else if(T >= A){
    ans = B;
  }else{
    ans = 0;
  }
  cout << ans << endl;
}
