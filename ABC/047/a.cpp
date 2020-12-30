#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  int sum_all = a + b + c;
  if(sum_all % 2 == 1){
    cout << "No" << endl;
    return 0;
  }
  string ans = "No";
  if(a == sum_all/2 || b == sum_all/2 || c == sum_all/2){
    ans = "Yes";
  }
  cout << ans << endl;
}
