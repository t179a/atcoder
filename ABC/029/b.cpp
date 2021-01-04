#include <bits/stdc++.h>
using namespace std;


int main(){
  int ans = 0;
  for(int i = 0; i < 12; i++){
    string s;
    cin >> s;
    int len_s = s.size();
    int sum = 0;
    for(int i = 0; i < len_s; i++){
      if(s.at(i) == 'r'){
        sum++;
      }
    }
    if(sum != 0){
      ans++;
    }
  }
  cout << ans << endl;
}
