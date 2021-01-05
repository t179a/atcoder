#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len_s = s.size();
  string ans = "";
  for(int i = 0; i < len_s; i++){
	int c = s.at(i);
    if(i == 0){
      c = toupper(c);
    }else{
      c = tolower(c);
    }
    ans += c;
  }
  cout << ans << endl;
}
  
