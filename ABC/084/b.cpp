#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  string S;
  cin >> A >> B >> S;
  int len = S.size();
  for(int i = 0; i < len; i++){
    if(i == A &&  S.at(i) != '-'){
      cout << "No" << endl;
      return 0;
    }else if(i != A && !isdigit(S.at(i))){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
      
}
