#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, A, B;
  cin >> X >> A >> B;
  string ans;
  int diffAB = A - B;
  if(diffAB >= 0){
    ans = "delicious";
  }else if(X - abs(diffAB) >= 0){
    ans = "safe";
  }else{
    ans = "dangerous";
  }
  cout << ans << endl;
}
