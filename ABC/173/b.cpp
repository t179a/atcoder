#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum_ac = 0;
  int sum_wa = 0;
  int sum_tle = 0;
  int sum_re = 0;
  for(int i = 0; i < N; i++) {
    string s;
    cin >> s;
    if(s == "AC") {
      sum_ac++;
    }
    else if(s == "WA") {
      sum_wa++;
    }
    else if(s == "TLE") {
      sum_tle ++;
    }
    else if(s == "RE") {
      sum_re++;
    }
  }
  
  cout << "AC" << " x " << sum_ac << endl;
  cout << "WA" << " x " << sum_wa << endl;
  cout << "TLE" << " x " << sum_tle << endl;
  cout << "RE" << " x " << sum_re << endl;
}
