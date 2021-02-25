#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int len = S.size();
    
  if(len == 1){
    int n = S.at(0) - '0';
    if(n % 8 == 0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
    return 0;
  }
  if(len == 2){
    int a = S.at(0) - '0';
    int b = S.at(1) - '0';
    if((a * 10 + b) % 8 == 0 || (b * 10  + a) % 8 == 0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
    return 0;
  }
  map<int,int> sum_i;
  for(int i = 1; i < 10; i++){
    sum_i[i] = 0;
  }
  for(int i = 0; i < len; i++){
    int num = S.at(i) - '0';
    sum_i[num]++;
  }
  
  bool flag = false;
  for(int i = 100; i < 1000; i++){
    if(i % 8 != 0) continue;
    string str = to_string(i);
    if(str.at(0) == '0' || str.at(1) == '0' || str.at(2) == '0'){
      continue;
    }
    map<int,int> m;
    for(int i = 1; i < 10; i++){
    m[i] = 0;
    }
    int c = i;
    while(c > 0){
      m[c%10]++;
      c /= 10;
    }
    int p = 0;
    for(int i = 1; i <= 9; i++){
      if(sum_i[i] >= m[i]){
        p++;
      }
    }
    if(p == 9) flag = true;
  }
  if(flag){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}
  
  
