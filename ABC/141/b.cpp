#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int sum = S.size();
  bool ans = true;
  for(int i = 0; i < sum; i++){
    if(i % 2 == 0 && S.at(i) == 'L'){
	  ans = false;
    }else if(i % 2 == 1 && S.at(i) == 'R'){
      ans = false;
    }
  }
  if(ans){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
