#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a.at(i);
  int ans = 0;
  for(int left = 0; left < N; left++){
    int sum = a[left];
    int a_min = a[left];
    for(int right = left + 1; right < N; right++){
      a_min = min(a_min, a[right]);
      sum = max(sum, a_min * (right - left + 1));
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
