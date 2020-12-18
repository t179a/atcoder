#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int num = s.size();
  string ans = "Good";
  for(int i = 0; i < num-1; i++){
    if(s.at(i) == s.at(i+1)){
      ans = "Bad";
    }
  }
  cout << ans << endl;
}
