#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  int sum = A + B;
  if(sum >= 10){
    cout << "error" << endl;
    return 0;
  }else{
    cout << sum << endl;
    return 0;
  }
}
