#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  string ans = "No";
  if(A % 2 == 1 && B % 2 == 1){
    ans = "Yes";
  }
  cout << ans << endl;
}
  
