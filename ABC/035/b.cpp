#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int T;
  cin >> S >> T;
  int len = S.size();
  
  int x = 0;
  int y = 0;
  int q_sum = 0;
  for(int i = 0; i < len; i++){
    if(S.at(i) == 'L'){
      x--;
    }else if(S.at(i) == 'R'){
      x++;
    }else if(S.at(i) == 'U'){
      y++;
    }else if(S.at(i) == 'D'){
      y--;
    }else if(S.at(i) == '?'){
      q_sum++;
    }
  }
  int ans;
  if(T == 1){
    ans = abs(x) + abs(y) + q_sum;
  }else if(T == 2){
    ans = max(abs(x) + abs(y) - q_sum, len%2);
  }
  cout << ans << endl;
  
}
