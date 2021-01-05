#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin >> s >> n;
  for(int i = 0; i < n; i++){
    int l, r;
    cin >> l >> r;
    l--;
    reverse(s.begin() + l, s.begin() + r);
  }
  cout << s << endl;
}
