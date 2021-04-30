#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string copy_S = S;
  int len = copy_S.size();
  for(int i = len - 1; i >= 0; i--){
    if(copy_S.at(i) != '0'){
      break;
    }else if(copy_S.at(i) == '0'){
      copy_S.pop_back();
    }
  }
  string R_copy_S = copy_S;
  reverse(R_copy_S.begin(), R_copy_S.end());
  if(R_copy_S == copy_S){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
      
}
