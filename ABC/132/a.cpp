#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int num = S.size();
  int sum_f = 0;
  char c_f = S.at(0);
  set<int> set_n;
  for(int i = 0; i < num; i++){
    set_n.insert(S.at(i));
    if(S.at(i) == c_f){
      sum_f++;
    }
  }
  string ans;
  int set_size = set_n.size();
  if(set_size == 2 && sum_f == 2){
    ans = "Yes";
  }else{
    ans = "No";
  }
  cout << ans << endl;
}
    
