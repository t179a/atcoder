#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int ans;
  if(B % A == 0){
    ans = A + B;
  }else{
    ans = B - A;
  }
  cout << ans << endl;
}
