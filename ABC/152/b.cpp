#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string sa = "";
  for(int i = 0; i < b; i++){
    sa += to_string(a);
  }
  string sb = "";
  for(int i = 0; i < a; i++){
    sb += to_string(b);
  }
  vector<string> vec(2);
  vec.at(0) = sa;
  vec.at(1) = sb;
  sort(vec.begin(), vec.end());
  cout << vec.at(0) << endl;
}
