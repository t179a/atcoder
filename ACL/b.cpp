#include<bits/stdc++.h>
using namespace std;

int main(){
  int64_t A, B, C, D; cin >> A >> B >> C >> D;
  string ans = "Yes";
  if(B < C || D < A){
    ans = "No";
  }
  cout << ans << endl;
}
