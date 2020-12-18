#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int ans;
  if(A == B){
    ans = A + B;
  }else{
    ans = max(A, B) + max(A-1, B-1);
  }
  cout << ans << endl;
}
