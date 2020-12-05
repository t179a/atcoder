#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int A, B;
  cin >> N >> A >> B;
  int ans = 0;
  for(int i = 1; i < N+1; ++i) {
    string s = to_string(i);
    int n = s.size();
    int sum = 0;
    for(int j = 0; j < n; ++j) {
	  int tmp = s.at(j) - '0';
      sum += tmp;
    }
    if(A <= sum && sum <= B) ans += i;
  }
  
  cout << ans << endl;
}
