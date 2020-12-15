#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<string> s;
  for(int i = 0; i < N; i++){
    string str;
    cin >> str;
    s.insert(str);
  }
  int ans = s.size();
  cout << ans << endl;
}
