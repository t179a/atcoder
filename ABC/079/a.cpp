#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();
  int count = 0;
  char last_c;
  for(int i = 0; i < len; i++){
	if(i >= 1 && last_c == s.at(i)){
      count++;
    }else if(i >= 1 && last_c != s.at(i)){
      count = 0;
    }
    if(count >= 2){
      break;
    }
    last_c = s.at(i);
  }
  string ans = "No";
  if(count >= 2){
	ans = "Yes";
  }
  cout << ans << endl;
    
}
