#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  double sum = 0;
  for(int i = 0; i < N; i++){
    double num;
    cin >> num;
    sum += (double) 1.0/num;
  }
  double ans = (double) 1.0 / sum;
  printf("%.10f\n", ans);
}
