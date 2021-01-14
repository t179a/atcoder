#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int64_t K;
  cin >> s >> K;
  int len_s = s.size();
  vector<int> vec;
  for(int i = 0; i < len_s; i++){
    if(s.at(i) == '1'){
      vec.push_back(1);
    }else{
      int num = s.at(i) - '0';
      vec.push_back(num);
      break;
    }
  }
  int len_v = vec.size();
  if(len_v >= K){
    cout << vec.at(K-1) << endl;
  }else{
    cout << vec.at(len_v - 1) << endl;
  }
}
  
