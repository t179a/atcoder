#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K; cin >> N >> K;
  int64_t R, S, P; cin >> R >> S >> P;
  string T; cin >> T;
  
  map<char, int64_t> score;
  score['s'] = R;
  score['p'] = S;
  score['r'] = P;
  vector<bool> used(N, false);
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    int preI = i - K;
    if(preI < 0){
      used.at(i) = true;
      ans += score[T.at(i)];
    }else{
      if(used.at(preI) && T.at(i) == T.at(preI)){
        continue;
      }else{
        ans += score[T.at(i)];
        used.at(i) = true;
      }
    }
  }
  cout << ans << endl;
}
                    
