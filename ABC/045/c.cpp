#include <bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int len = S.size();
  int64_t ans = 0;
  for(int i = 0; i < (1 << len-1); i++){
    bitset<10> b(i);
    int last = 0;
    for(int j = 0; j < 10; j++){
      if(b.test(j)){
        string t = S.substr(last, j+1-last);
        int64_t n = stoll(t);
        ans += n;
        last = j+1;
      }
    }
    int64_t r = stoll(S.substr(last, len - last));
    ans += r;
  }
  cout << ans << endl;
}
    
