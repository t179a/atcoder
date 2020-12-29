#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int sum = a + b;
  int ans;
  if(sum % 2 == 0){
    ans = sum/2;
  }else{
    ans = (sum + 1)/2;
  }
  cout << ans << endl;
}
