#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N;
  cin >> N;
  string ans = "";
  while(N){
    N--;
    ans += ('a' + (N % 26));
    N /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}
    
  
  
