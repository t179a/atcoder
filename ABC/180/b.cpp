#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> d(N);
  for(int64_t i = 0; i < N; i++) {
    cin >> d[i];
  }
  
  int64_t ans_m = 0;
  for(int64_t i = 0; i < N; i++) {
    ans_m += abs(d[i]);
  }
  cout << ans_m << endl;
 
  double ans_e = 0;
  int64_t sum = 0;
  for(int64_t i = 0; i < N; i++) {
    sum += int64_t (d[i]) * int64_t(d[i]);
  }
  ans_e = sqrt(sum);
  printf("%.16f\n", ans_e);
  
  int ans_c = 0;
  for(int64_t i = 0; i < N; i++) {
    ans_c = max(ans_c, abs(d[i]));
  }
  cout << ans_c << endl;
}
                
                
                
	
  
  
