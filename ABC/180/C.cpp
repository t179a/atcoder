#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  vector<int64_t> d;
  for(int64_t i = 1; i*i <= N; ++i) {
    if(N % i == 0) {
      cout << i << endl;
      d.push_back(i);
    }
  }
  int64_t S = d.size();
  sort(d.begin(), d.end(), greater<int64_t>());
  for(int64_t i = 0; i < S; ++i) {
    if(d[i]*d[i] == N) continue;
    int64_t tmp = N/d[i];
    cout << tmp << endl;
  }
    
}
