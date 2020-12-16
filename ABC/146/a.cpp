#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  map<string, int> map_d = {{"SUN",7},{"MON",6},{"TUE",5},{"WED",4},{"THU",3},{"FRI",2},{"SAT", 1}};
  cout << map_d[S] << endl;
}
