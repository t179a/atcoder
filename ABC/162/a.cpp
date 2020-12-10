#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for(int i = 0; i < n; i++ ) {
	int num = (int) s.at(i) - '0';
    if(num == 7) {
	  cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}
