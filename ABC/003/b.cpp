#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  int len = s.size();
  set<char> sc = {'a','t','c','o','d','e','r'};
  for(int i = 0; i < len; i++){
    if(s.at(i) == t.at(i)){
      continue;
    }else if(s.at(i) == '@' && sc.count(t.at(i))){
      continue;
    }else if(t.at(i) == '@' && sc.count(s.at(i))){
      continue;
    }else{
      cout << "You will lose" << endl;
      return 0;
    }
  }
  cout << "You can win" << endl;
  return 0;
}
