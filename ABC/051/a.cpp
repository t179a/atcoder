#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len = s.size();
  for(int i = 0; i < len; i++){
	if(s.at(i) == ','){
      s.at(i) = ' ';
    }
  }
  cout << s << endl;
}
