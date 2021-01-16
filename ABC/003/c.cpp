#include <bits/stdc++.h>
using namespace std;

int main(){
  double N, K;
  cin >> N >> K;
  vector<double> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  double ans = 0;
  for(int i = N - K; i < N; i++){
    ans = (ans + vec.at(i))/2.0;
  }
  printf("%.8lf\n", ans);
}
