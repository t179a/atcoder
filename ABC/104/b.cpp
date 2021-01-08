#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len_S = S.size();
  string ans = "AC";
  if(S.at(0) != 'A'){
    ans = "WA";
  }
  int count = 0;
  for(int i = 1; i < len_S; i++){
    if(isupper(S.at(i))){
      if(i >= 2 && i <= len_S -2 && count == 0){
        count++;
      }else{
        ans = "WA";
      }
    }
  }
  if(count == 0){
    ans = "WA";
  }
  cout << ans << endl;
}
