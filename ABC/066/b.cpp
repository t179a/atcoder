#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();
  for(int i = 1; i < len; i++){
    string s_part = s.substr(0,len - i);
    int sp_len = s_part.size();
    if(sp_len % 2 != 0){
      continue;
    }
    bool bo = true;
    for(int j = 0; j < sp_len/2; j++){
      if(s_part.at(j) != s_part.at(sp_len/2 + j)){
        bo = false;
      }
    }
    if(bo){
      cout << sp_len << endl;
      return 0;
    }
  }
}
