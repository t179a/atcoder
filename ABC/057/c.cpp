#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  int ans = 1000000000;
  for(int64_t i = 1; i <= sqrt(N); i++){
    if(N % i == 0){
      int len_a = to_string(i).size();
      int len_b = to_string(N/i).size();
      ans = min(ans, max(len_a, len_b));
    }
  }
  cout << ans << endl;
  
}
    
