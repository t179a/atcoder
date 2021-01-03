#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();
  set<char> sc;
  for(int i = 0; i < len; i++){
	sc.insert(s.at(i));
  }
  for(int i = 0; i <= 'z' - 'a'; i++){
    char c_tmp = (char) 'a' + i;
    if(!sc.count(c_tmp)){
      cout << c_tmp << endl;
      return 0;
    }
  }
  cout << "None" << endl;
  return 0;
}
