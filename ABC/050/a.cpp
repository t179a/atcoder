#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  char x;
  int b;
  cin >> a >> x >> b;
  int ans;
  if(x == '+'){
    ans = a + b;
  }else{
    ans = a - b;
  }
  cout << ans << endl;
}
