#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  cin >> S >> T;
  int len_s = S.size();
  int len_t = T.size();
  reverse(S.begin(), S.end());
  reverse(T.begin(), T.end());
  bool exist = false;
  for(int i = 0; i < len_s - len_t + 1; i++){
    bool ok = true;
    for(int j = 0; j < len_t; j++){
      if(S.at(i + j) == '?'){
        continue;
      }else if(S.at(i + j) == T.at(j)){
        continue;
      }else{
        ok = false;
      }
    }
    if(ok){
      for(int k = i; k < i + len_t; k++){
        S.at(k) = T.at(k - i);
      }
      exist = true;
      break;
    }
  }
  if(!exist){
    cout << "UNRESTORABLE" << endl;
    return 0;
  }
  for(int i = 0; i < len_s; i++){
    if(S.at(i) == '?'){
      S.at(i) = 'a';
    }
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
  
}
