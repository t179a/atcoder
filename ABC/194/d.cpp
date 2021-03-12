#include <bits/stdc++.h>
using namespace std;

int main(){
  double N; cin >> N;
  double ans;
  double sum = 0;
  for(int i = 1; i <= N; i++){
    sum += 1.0/i;
  }
  ans += N * sum;
  ans -= 1;
  
  printf("%.10lf", ans);
}
   
     
