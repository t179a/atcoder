#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  pair<int64_t,int64_t> ans = make_pair(1,1);
  for(int i = 0; i < N; i++){
    int64_t t, a; cin >> t >> a;
    int64_t mult = max((ans.first + t -1)/t, (ans.second + a -1)/a);
    ans.first = t * mult;
    ans.second = a * mult;
    //cout << ans.first << " " << ans.second << endl;
  }
  cout << ans.first + ans.second << endl;
}
  
