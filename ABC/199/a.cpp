#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c; cin >> a >> b >> c;
  string ans = "No";
  if(a * a + b * b < c * c){
    ans = "Yes";
  }
  cout << ans << endl;
}
