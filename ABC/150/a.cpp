#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, x;
  cin >> k >> x;
  int sum = 500 * k;
  string ans;
  if(sum >= x){
    ans = "Yes";
  }else{
    ans = "No";
  }
  cout << ans << endl;
}
