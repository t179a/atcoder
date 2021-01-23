#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<int> s(N);
  for(int i = 0; i < N; i++){
    cin >> s.at(i);
    if(s.at(i) == 0){
      cout << N << endl;
      return 0;
    }
  }
  int res = 0;
  int right = 0;
  long long m = 1;
  for(int left = 0; left < N; ++left){
    while(right < N && m * s[right] <= K){
      m *= s[right];
      ++right;
    }
    res = max(right - left, res);
    if(right == left) ++right;
    else m /= s[left];
  }
  cout << res << endl;
}
    
