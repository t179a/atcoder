#include <bits/stdc++.h>
using namespace std;

int64_t g1(string s){
  int64_t ans = 0;
  sort(s.begin(), s.end(), greater<int>());
  for(int i = 0; i < (int)s.size(); i++){
    ans *= 10;
    ans += s.at(i) - '0';
  }
  return ans;
}
int64_t g2(string s){
  int64_t ans = 0;
  sort(s.begin(), s.end());
  for(int i = 0; i < (int)s.size(); i++){
    if(s.at(i) == 0)continue;
    ans *= 10;
    ans += s.at(i) - '0';
  }
  return ans;
}

int main(){
  string N; int K; cin >> N >> K;
  
  for(int i = 0; i < K; i++){
    int64_t num = g1(N) - g2(N);
    N = to_string(num);
  }
  cout << N << endl;
}
