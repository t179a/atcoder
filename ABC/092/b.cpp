#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, D, X;
  cin >> N >> D >> X;
  int ans = N + X;
  for(int i = 0; i < N; i++){
	int a;
    cin >> a;
    int sum = 0;
    for(int i = 1; i*a + 1 <= D; i++){
      sum++;
    }
    ans += sum;
  }
  cout << ans << endl;
}
