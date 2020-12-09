#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int sum = S.size();
  char lastC = S.at(sum - 1);
  if(lastC == 's') {
	S = S + "es";
  }else {
    S = S + 's';
  }
  
  cout << S << endl;
}
