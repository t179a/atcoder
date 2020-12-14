#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<string, int> sum;
  for(int i = 0; i < N; i++){
    string str;
    cin >> str;
    if(!sum.count(str)){
      sum[str] = 1;
    }else{
      sum[str] += 1;
    }
  }
  int max_n = 0;
  for(auto p: sum){
    auto value = p.second;
    max_n = max(max_n, value);
  }
  vector<string> vec_s;
  for(auto p: sum){
    auto key = p.first;
    auto value = p.second;
    if(value == max_n){
      vec_s.push_back(key);
    }
  }
  sort(vec_s.begin(), vec_s.end());
  for(int i = 0; i < vec_s.size(); i++){
    cout << vec_s.at(i) << endl;
  }
}
    
