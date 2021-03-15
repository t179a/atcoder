#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; string S; cin >> N >> S;
  map<char, int64_t> memo;
  memo['R'] = 0;
  memo['G'] = 0;
  memo['B'] = 0;
  for(int i = 0; i < N; i++){
    memo[S.at(i)]++;
  }
  int64_t ans = 0;
  int64_t sum = 1;
  for(auto p : memo){
    sum *= p.second;
  }
  ans += sum;
  
  for(int i = 1; i <= N; i++){
    for(int p = 0; p < N; p++){
      if(p + 2 * i >= N) continue;
      if(S.at(p) != S.at(p + i) && S.at(p) != S.at(p + 2*i) && S.at(p + i) != S.at(p + 2*i)){
        ans--;
      }
    }
  }
  cout << ans << endl;

}
