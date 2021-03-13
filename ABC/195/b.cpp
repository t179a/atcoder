#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, W; cin >> A >> B >> W;
  W *= 1000;
  int a_max = W / A;
  int a_min;
  if(W % B == 0){
    a_min = W / B;
  }else{
    a_min = (W / B) + 1;
  }
  if(a_min > a_max){
    cout << "UNSATISFIABLE" << endl;
    return 0;
  }else{
    cout << a_min << " " << a_max << endl;
  }
}
