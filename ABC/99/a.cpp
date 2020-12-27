#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string ans = "ABC";
  if(N > 999){
    ans = "ABD";
  }
  cout << ans << endl;
}
