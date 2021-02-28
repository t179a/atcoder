#include<bits/stdc++.h>
using namespace std;

double calc(int x){
  return (0.5*x + 0.5);
}

int main(){
  int64_t N, K; cin >> N >> K;
  vector<double>ev(N);
  for(int i = 0; i < N; i++){
    int p; cin >> p;
    ev.at(i) = calc(p);
  }
  double sum = 0;
  for(int i = 0; i < K; i++){
    sum += ev.at(i);
  }
  double ans = sum;
  for(int i = 0; i < N - K; i++){
    sum -= ev.at(i);
    sum += ev.at(i+K);
    ans = max(ans, sum);
  }
  printf("%.10lf\n", ans);
}
  
  
  
  
    
