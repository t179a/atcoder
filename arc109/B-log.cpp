#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n;
  cin >> n;
  int64_t nPlus1 = n + 1;
  int64_t sum = 0;
  int64_t num = 0;
  for (int64_t i = 1; sum <= nPlus1; i++){
    num = i;
    sum += i;
  }
  
  int64_t ans = nPlus1 - num + 1;
  cout << ans << endl;
  
}
