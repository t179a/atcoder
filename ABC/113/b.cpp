#include <bits/stdc++.h>
using namespace std;

int main(){
  double N, T, A;
  cin >> N >> T >> A;
  vector<double> vec(N);
  for(int i = 0; i < N; i++){
    double h;
    cin >> h;
    vec.at(i) = T - h * 0.006;
  }
  int ans = -1;
  double diff_min = 1000000;
  for(int i = 1; i <= N; i++){
    double diff = abs(A - vec.at(i-1));
    if(diff < diff_min){
      ans = i;
      diff_min = min(diff, diff_min);
    }
  }
  cout << ans << endl;
}
