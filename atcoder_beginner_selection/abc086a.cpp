#include <bits/stdc++.h>
using namespace std;

int main () {
  int a, b;
  cin >> a >> b;
  int c = a * b;
  string ans = c % 2 == 1 ? "Odd" : "Even";
  cout << ans << endl;
}
  
