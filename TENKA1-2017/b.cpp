#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int max_A = 0;
  int min_B = 1000000007;
  for(int i = 0; i < N; i++){
    int a, b; cin >> a >> b;
    if(a > max_A){
      max_A = a;
      min_B = b;
    }
  }
  int64_t ans = max_A + min_B;
  cout << ans << endl;
  
  
}
