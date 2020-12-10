#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int len_s = s.size();
  for(int i = 0; i < len_s; i++ ){
    if(s.at(i) != t.at(i)){
	  cout << "No" << endl;
      return 0;
    }
  }
  cout <<"Yes" << endl;
  return 0;
}
