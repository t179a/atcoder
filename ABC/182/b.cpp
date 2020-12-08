#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  
  for(int i = 0; i < N; i++) {
    cin >> d.at(i);
  }
  
  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());
  int maxnum = d[0];
  int sum = 0;
  int ans = 0;
  for(int i = 2; i <= maxnum; i++) {
    int count = 0;
    for(int j = 0; j < N; j++) {
	  if(d[j] % i == 0) {
        count++;
      }
    }
    if(count >= sum){
      sum = count;
      ans = i;
    }
  }
  
  cout << ans << endl;
}
    
