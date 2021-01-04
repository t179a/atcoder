#include <bits/stdc++.h>
using namespace std;

int main(){
  int L, H, n;
  cin >> L >> H >> n;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    int ans;
    if(a >= L && a <= H){
      ans = 0;
    }else if(a > H){
      ans = -1;
    }else if(a < L){
      ans = L - a;
    }
    cout << ans << endl;
  }
}
  
