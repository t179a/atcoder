#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c; cin >> a >> b >> c;
  string ans = "No";
  if((a < c && c < b) || (b < c && c < a)){
    ans = "Yes";
  }
  cout << ans << endl;
}
