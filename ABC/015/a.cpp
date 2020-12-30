#include <bits/stdc++.h>
using namespace std;

int main(){
  string A, B;
  cin >> A >> B;
  string ans = A;
  if(A.size() < B.size()){
    ans = B;
  }
  cout << ans << endl;
}
