#include <bits/stdc++.h>
using namespace std;

int main(){
  deque<char> que;
  string S; cin >> S;
  for(int i = 0; i < (int) S.size(); i++){
    que.push_back(S.at(i));
  }
  
  int Q; cin >> Q;
  bool flag = true;
  
  for(int i = 0; i < Q; i++){
    int T; cin >> T;
    if(T == 1){
      flag = !flag;
    }else{
      int F; char C; cin >> F >> C;
      if(F == 1 && flag){
        que.push_front(C);
      }else if(F == 1 && !flag){
        que.push_back(C);
      }else if(F == 2 && flag){
        que.push_back(C);
      }else{
        que.push_front(C);
      }
    }
  }
  
  string ans = "";
  int sum = (int) que.size();
  if(flag){
    for(int i = 0; i < sum; i++){
      ans += que.at(i);
    }
  }else{
    for(int i = 0; i < sum; i++){
      ans += que.at(sum - i - 1);
    }
  }
  cout << ans << endl;
}
  
  
