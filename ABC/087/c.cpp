#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int d1[N];
  int d2[N];
  for(int i = 0; i < N; i++){
    cin >> d1[i];
  }
  for(int i = 0; i < N; i++){
    cin >> d2[i];
  }
  int ans = 0;
  for(int i = 0; i < N; i++){
    int sum = 0;
    for(int j = 0; j <= i; j++){
      sum += d1[j];
    }
    for(int k = i; k < N; k++){
      sum += d2[k];
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
