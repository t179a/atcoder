#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int d[N];
  for(int i = 0; i < N; i++){
    cin >> d[i];
  }
  int ans = 1000000000;
  for(int i = -100; i <= 100; i++){
    int sum = 0;
    for(int j = 0; j < N; j++){
      sum += pow(abs(d[j] - i), 2);
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}
