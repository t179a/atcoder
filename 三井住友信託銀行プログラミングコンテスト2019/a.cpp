#include<bits/stdc++.h>
using namespace std;

int main(){
  int M1, D1, M2, D2; cin >> M1 >> D1 >> M2 >> D2;
  int ans = 1;
  if(M1 == M2){
    ans = 0;
  }
  cout << ans << endl;
  return 0;
}
