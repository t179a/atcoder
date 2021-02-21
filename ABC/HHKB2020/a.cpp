#include <bits/stdc++.h>
using namespace std;

int main(){
  char S, T; cin >> S >> T;
  if(S == 'Y'){
    T = toupper(T);
    cout << T << endl;
  }else{
    cout << T << endl;
  }
  return 0;
}
