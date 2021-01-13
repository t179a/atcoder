#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  int ans = ((N-1) + (K-1) - 1) / (K-1);
  cout << ans << endl;
}
