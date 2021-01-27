#include <bits/stdc++.h>
using namespace std;

void rev(vector<string> & vs){
  int len = vs.size();
  for(int i = 0; i < len; i++){
    reverse(vs.at(i).begin(), vs.at(i).end());
  }
}

int main(){
  string S; cin >> S;
  int len = S.size();
  reverse(S.begin(), S.end());
  vector<string> vs = {"dream", "dreamer", "erase", "eraser"};
  rev(vs);
  string T = "";
  int i = 0;
  while((int)T.size() != len){
    if(S.substr(i,5) == vs.at(0)){
      T += vs.at(0);
      i +=5;
    }else if(S.substr(i,5) == vs.at(2)){
      T += vs.at(2);
      i += 5;
    }else if(S.substr(i,6) == vs.at(3)){
      T += vs.at(3);
      i += 6;
    }else if(S.substr(i,7) == vs.at(1)){
      T += vs.at(1);
      i += 7;
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  
}
