#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  int tmp = 0;
  for(int i = 0; i < N; i++){
    char c = S.at(i);
    if(c =='I'){
      tmp++;
    }else if(c == 'D'){
      tmp--;
    }
    ans = max(tmp, ans);
  }
  cout << ans << endl;
}
