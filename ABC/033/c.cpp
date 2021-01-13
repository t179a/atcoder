#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int len_s = s.size();
  vector<string> vec;
  int index = -1;
  for(int i = 0; i < len_s; i++){
    if(s.at(i) == '+'){
      string tmp = s.substr(index+1, i-index-1);
      index = i;
      vec.push_back(tmp);
    }
  }
  vec.push_back(s.substr(index+1));
  int len_v = vec.size();
  int ans = 0;
  for(int i = 0; i < len_v; i++){
    int len_t = vec.at(i).size();
    int sum_0 = 0;
    for(int j = 0; j < len_t; j++){
      if(vec.at(i).at(j) == '0'){
        sum_0++;
      }
    }
    if(sum_0 == 0){
      ans++;
    }
  }
  cout << ans << endl;
}
