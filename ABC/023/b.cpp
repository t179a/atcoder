#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  string S;
  cin >> N >> S;
  string tmp = "b";
  int ans;
  if(tmp == S){
    ans = 0;
  }else {
    ans = -1;
  }
  for(int i = 1; i < N; i++){
    if(i % 3 == 1){
      tmp.push_back('c');
      tmp.insert(0,"a");
    }else if(i % 3 == 2){
      tmp.push_back('a');
      tmp.insert(0,"c");
    }else if(i % 3 == 0){
      tmp.push_back('b');
      tmp.insert(0,"b");
    }
    if(tmp == S){
      ans = i;
    }
  }
  cout << ans << endl;
}
