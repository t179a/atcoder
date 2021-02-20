#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int64_t> C(N);
  for(int i = 0; i < N; i++){
    cin >> C.at(i);
  }
  
  double ans = 0;
  for(int i = 0; i < N; i++){
    int sum_div = 0;
    for(int j = 0; j < N; j++){
      if(i == j) continue;
      if(C.at(i) % C.at(j) == 0) sum_div++;
    }
    if(sum_div % 2 == 1){
      ans += (double) 1 / (double) 2;
    }else{
      ans += (double) (sum_div + 2)/ (double) (2 * sum_div + 2);
    }
  }
  printf("%.12lf\n", ans);
}
