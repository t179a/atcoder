#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A, B, K;
  cin >> A >> B >> K;
  int64_t zero = 0;
  int64_t AE = max(A - K, zero);
  int64_t diff = max(zero, K - A);
  int64_t BE = max(B - diff, zero);
  
  cout << AE << " " << BE << endl;
}
  
