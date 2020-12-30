#include <bits/stdc++.h>
using namespace std;

int main(){
  char c;
  cin >> c;
  set<char> set_c = {'a', 'e', 'i', 'o', 'u'};
  string ans = "consonant";
  if(set_c.count(c)){
	  ans = "vowel";
  }
  cout << ans << endl;
}
