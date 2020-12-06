#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> d(N);
  for(int i = 0; i < N; i++) {
    cin >> d[i];
  }
  
  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());
  
  int sumA = 0;
  int sumB = 0;
  for(int i = 0; i < N; i++) {
    if(i % 2 == 0){
      sumA += d[i];
    }
    else if(i % 2 == 1) {
      sumB += d[i];
    }
  } 
  
  int ans = sumA - sumB; 
  cout << ans << endl;
  
}
