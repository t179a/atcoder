#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  int sumL = A + B;
  int sumR = C + D;
  string ans = "Balanced";
  if(sumL > sumR){
    ans = "Left";
  }else if(sumL < sumR){
    ans = "Right";
  }
  cout << ans << endl;
}
