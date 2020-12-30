#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int ans;
  if(B % A == 0){
    ans = B / A;
  }else{
    ans = (B / A) + 1;
  }
  cout << ans << endl;
}
