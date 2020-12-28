#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int sum = 0;
  for(int i = 0; i < 3; i++){
    if(s.at(i) == 'o'){
      sum++;
    }
  }
  cout << 700 + 100*sum << endl;
}
