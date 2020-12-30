#include <bits/stdc++.h>
using namespace std;

int main(){
  double A, B, C, D;
  cin >> A >> B >> C >> D;
  double wr_a = B/A;
  double wr_b = D/C;
  string ans;
  if(wr_a == wr_b){
    ans = "DRAW";
  }else if(wr_a > wr_b){
	ans = "TAKAHASHI";
  }else{
    ans = "AOKI";
  }
  cout << ans << endl;
}
