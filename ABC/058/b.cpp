#include <bits/stdc++.h>
using namespace std;

int main(){
  string o, e;
  cin >> o >> e;
  int len_o = o.size();
  int len_e = e.size();
  int sum = len_o + len_e;
  string ans = "";
  for(int i = 0; i < sum; i++){
    if(i % 2 == 0){
      ans += o.at(i/2);
    }else{
      ans += e.at((i-1)/2);
    }
  }
  cout << ans << endl;
}
