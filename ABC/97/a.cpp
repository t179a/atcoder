#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int len_ac = min(abs(a-c), max(abs(a-b),abs(b-c)));
  string ans = "Yes";
  if(len_ac > d){
    ans = "No";
  }
  cout << ans << endl;
}
