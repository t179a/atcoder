#include <bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  string T = "WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW";
  vector<string> ans = {"Do","Re","Mi","Fa","So","La","Si"};
  int len = ans.size();
  int c = 0;
  for(int i = 0; i < len; i++){
    while(T.at(c) == 'B'){
      c++;
    }
    if(T.substr(c, (int) S.size()) == S){
      cout << ans.at(i) << endl;
      return 0;
    }
    c++;
  }
}
