#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t x;
  cin >> x;
  int64_t ans = 0;
  int64_t sum = 100;
  while(sum < x){
    ans++;
    sum += sum/100;
  }
  cout << ans << endl;
}
  
