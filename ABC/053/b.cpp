#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len_s = s.size();
  int a_index;
  int z_index;
  for(int i = 0; i < len_s; i++){
    if(s.at(i) == 'A'){
      a_index = i;
      break;
    }
  }
  for(int i = 0; i < len_s; i++){
    if(s.at(i) == 'Z'){
      z_index = i;
    }
  }
  int ans = z_index - a_index + 1;
  cout << ans << endl;
}
