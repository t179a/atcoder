#include <bits/stdc++.h>
using namespace std;
string X; int64_t M;


  
    
int main(){
  cin >> X >> M;
  if(X.size() == 1){
    if(M >= X.at(0) - '0'){
      cout << 1 << endl;
    }else{
      cout << 0 << endl;
    }
    return 0;
  }
  
  int d = -1;
  for(int i = 0; i < (int) X.size(); i++){
    d = max(d, X.at(i) - '0');
  }
  
  int64_t ac = d; int64_t wa = M + 1;
  while(wa - ac > 1){
    int64_t wj = (ac + wa)/2;
    int64_t v = 0;
    for(char c : X){
      if(v > M/wj) v = M + 1;
      else v = v * wj + (c - '0');
    }
    if(v <= M) ac = wj;
    else wa = wj;
  }
  cout << ac - d << endl;
}
  
  
