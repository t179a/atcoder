#include<bits/stdc++.h>
using namespace std;
int64_t N;
vector<pair<int64_t,int64_t>> prime_factorize(int64_t N){
  vector<pair<int64_t, int64_t>> res;
  for(int64_t a = 2; a * a <= N; a++){
    if(N % a != 0) continue;
    long long ex = 0;
    while(N % a == 0){
      ++ex;
      N /= a;
    }
    res.emplace_back(a, ex);
  }
  if(N != 1) res.emplace_back(N, 1);
  return res;
}

int main(){
  cin >> N;
  vector<pair<int64_t, int64_t>> vp = prime_factorize(N);
  map<int64_t,int64_t>memo;
  memo[1] = 1;
  for(int i = 2; i < 60; i++){
    memo[i] = memo[i-1] + i;
  }
  int ans = 0;
  for(auto p : vp){
    int64_t sum = p.second;
    int tmp = 0;
    for(int i = 1; sum >= memo[i]; i++){
      tmp = i;
    }
    //cout << tmp << endl;
    ans += tmp;
  }
  cout << ans << endl;
}
