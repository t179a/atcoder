#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int sum = 0;
  int len = S.size();
  for(int i = 0; i < len; i++){
    if(S.at(i) == '-'){
	  sum--;
    }else{
	  sum++;
    }
  }
  cout << sum << endl;
}
