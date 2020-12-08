#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  
  int64_t ans = 0;
  
  for(int64_t i = 0; i < N; i++) {
    int64_t a,b;
    cin >> a >> b;
    int64_t sum = (b+1) * b / 2 - a * (a - 1) / 2;
    ans += sum;
    
  }
  
  cout << ans << endl;
  
}
    
