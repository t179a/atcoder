#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;
  pair<int64_t,int64_t> ans = make_pair(0, A*100);
  
  for(int64_t a = 0; a <= F; a += 100*A){
    for(int64_t b = 0; a + b <= F; b += 100 * B){
      int64_t water = a + b;
      int64_t max_sugar = min(F - water, E * (a + b)/100);
      for(int64_t c = 0; c <= max_sugar; c += C){
        for(int64_t d = 0; c + d <= max_sugar;d += D){
          int64_t sugar = c + d;
          pair<int64_t,int64_t> p = make_pair(sugar,water);
          if(ans.first * p.second < ans.second * p.first){
            ans = p;
          }
        }
      }
    }
  }
  cout << ans.first + ans.second << " " << ans.first << endl;
  
}
            
