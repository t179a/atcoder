#include <bits/stdc++.h>
using namespace std;

int main(){
  int M, H;
  cin >> M >> H;
  string ans;
  if(H % M == 0){
    ans = "Yes";
  }else{
    ans = "No";
  }
  cout << ans << endl;
  
}
