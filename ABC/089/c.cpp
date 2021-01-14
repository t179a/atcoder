#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<char> s = {'M','R','C','A','H'};
  map<char, int> m;
  for(int i = 0; i < N; i++){
    string name;
    cin >> name;
    char c = name.at(0);
    m[c]++;
  }
  vector<int64_t> vec;
  for(auto p : m){
    if(s.count(p.first)){
      vec.push_back(m[p.first]);
    }
  }
  int64_t ans = 0;
  int len_v = vec.size();
  for(int i = 0; i < len_v; i++){
    for(int j = i+1; j < len_v; j++){
      for(int k = j+1; k < len_v; k++){
        ans += vec.at(i) * vec.at(j) * vec.at(k);
      }
    }
  }
  cout << ans << endl;
}
  
