#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  if(A > 0 && A < 10 && B > 0 && B < 10){
    cout << A * B << endl;
    return 0;
  }else{
	cout << -1 << endl;
    return 0;
  }
}
