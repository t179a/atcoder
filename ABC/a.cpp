#include <bits/stdc++.h>
using namespace std;

int main(){
  int A1, A2, A3;
  cin >> A1 >> A2 >> A3;
  int sum = A1 + A2 + A3;
  string ans;
  if(sum >= 22){
    ans = "bust";
  }else{
    ans = "win";
  }
  cout << ans << endl;
}
