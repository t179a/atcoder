#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  string ans;
  if(A == B){
    ans = "Draw";
  }else if(A == 1){
	ans = "Alice";
  }else if(B == 1){
    ans = "Bob";
  }else{
	ans = A > B ? "Alice" : "Bob";
  }
  cout << ans << endl;
}
