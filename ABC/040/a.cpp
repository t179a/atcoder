#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  int ans = min(N - X, X - 1);
  cout << ans << endl;
}
