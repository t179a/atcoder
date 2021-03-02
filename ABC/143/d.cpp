#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> L(N);
  for(int i = 0; i < N; i++){
    cin >> L.at(i);
  }
  sort(L.begin(), L.end(), greater<int>());
  
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    for(int j = i+1; j < N; j++){
      int right = j + 1;
      while(right < N && L.at(i) < L.at(j) + L.at(right)){
        right++;
        ans++;
      }
    }
  }
  cout << ans << endl;
}
  
