#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, s; cin >> a >> b >> c >> s;
  string ans = "No";
  int sum_min = a + b + c;
  int sum_max = a + b + c + 3;
  if(s >= sum_min && s <= sum_max){
    ans = "Yes";
  }
  cout << ans << endl;
}
