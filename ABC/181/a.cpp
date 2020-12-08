#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  string ans;
  if(N % 2 == 1){
    ans = "Black";
  }else{
    ans = "White";
  }
  
  cout << ans << endl;
}
