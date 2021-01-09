#include <bits/stdc++.h>
using namespace std;

int main(){
  int D, N;
  cin >> D >> N;
  
  int start = 1;
  for(int i = 0; i < D; i++){
    start *= 100;
  }
  int ans;
  if(N == 100){
    ans = start * 101;
  }else{
    ans = start * N;
  }
  cout << ans << endl;
}
