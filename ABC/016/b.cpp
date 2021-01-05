#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  string ans;
  if(a + b == a - b && a + b == c){
    ans = "?";
  }else if(a + b == c){
    ans = "+";
  }else if(a - b == c){
    ans = "-";
  }else{
    ans = "!";
  }
  cout << ans << endl;
}
