#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  set<int> s;
  for(int i = 0; i < k; i++) {
    int d;
    cin >> d;
    for(int i = 0; i < d; i++) {
      int num;
      cin >> num;
      s.insert(num);
    }
  }
  int ans = n - s.size();
  cout << ans << endl;
}
