#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len_s = s.size();
  for(int i = 0; i < len_s; i++){
    if(s.at(i) == 'c' && s.at(i+1) == 'h'){
      i++;
    }else if(s.at(i) == 'o' || s.at(i) == 'k' || s.at(i) == 'u'){
      continue;
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}
