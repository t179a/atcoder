#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  int ans = 100;
  for(int i = 0; i < N; i++){
    int sum = 0;
    string s; cin >> s;
    int len = s.size();
    for(int c = len - 1; c >= 0; c--){
      if(s.at(c) == '0'){
        sum++;
      }else{
        break;
      }
    }
    ans = min(sum, ans);
  }
  cout << ans << endl;
}
