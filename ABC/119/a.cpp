#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  string num_s = "";
  int s_size = S.size();
  for(int i = 0; i < s_size; i++){
    if(S.at(i) == '/'){
	  continue;
    }else{
	  num_s += S.at(i);
    }
  }
  string ans;
  int num_i = stoi(num_s);
  if(num_i <= 20190430){
    ans = "Heisei";
  }else{
    ans = "TBD";
  }
  cout << ans << endl;
}
