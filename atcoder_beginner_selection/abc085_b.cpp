#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  set<int> s;
  for(int i = 0; i < N; i++) {
    int tmp;
    cin >> tmp;
    s.insert(tmp);
  }
  
  int ans = s.size();
  cout << ans << endl;
}
  
