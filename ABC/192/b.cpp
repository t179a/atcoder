#include <bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  bool flag = true;
  for(int i = 0; i < (int) S.size(); i++){
    if(i % 2 == 0){
      if(isupper(S.at(i))){
        flag = false;
      }
    }else if(i % 2 == 1){
      if(islower(S.at(i))){
        flag = false;
      }
    }
  }
  if(flag){
    cout << "Yes" << endl;
    return 0;
  }else{
    cout << "No" << endl;
    return 0;
  }


}
