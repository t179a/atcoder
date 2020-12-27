#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int num_max = max(A, B);
  string ans = "Yay!";
  if(num_max > 8){
    ans = ":( ";
  }
  cout << ans << endl;
}
