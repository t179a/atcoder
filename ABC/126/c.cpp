#include <bits/stdc++.h>
using namespace std;

int main(){
  double N, K;
  cin >> N >> K;
  double ans = 0;
  for(double i = 1; i <= N; i++){
    double count = 0;
    double score = i;
    while(score < K){
      score *= 2;
      count++;
    }
    double p = 1/(pow(2, count)*N);
    ans += p;
  }
  printf("%.15lf\n", ans);
}
    
  
