#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  string T1 = "", T2 = "";
  for(int i = 0; i < len; i++){
    if(i % 2 == 0){
      T1 += "0";
      T2 += "1";
    }else{
      T1 += "1";
      T2 += "0";
    }
  }
  int C1 = 0, C2 = 0;
  for(int i = 0; i < len; i++){
    if(S.at(i) != T1.at(i)){
      C1++;
    }
    if(S.at(i) != T2.at(i)){
      C2++;
    }
  }
  cout << min(C1, C2) << endl;
}
    
  
