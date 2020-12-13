#include <bits/stdc++.h>
using namespace std;
int64_t combinations2(int64_t n, int64_t k) {
    int64_t r = 1;
    for (int64_t d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}
int main(){
  int L;
  cin >> L;
  
  cout << combinations2(L-1, 11) << endl;
}
