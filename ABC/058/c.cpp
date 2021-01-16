#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string s1;
  cin >> s1;
  int len_s1 = s1.size();
  map<char, int> m1;
  for(int i = 0; i < len_s1; i++){
    char c = s1.at(i);
    if(m1.count(c)){
      m1[c]++;
    }else{
      m1[c] = 1;
    }
  }
  
  for(int i = 1; i < N; i++){
    string s;
    cin >> s;
    map<char, int> m2;
    int len_s = s.size();
    for(int j = 0; j < len_s; j++){
      char c = s.at(j);
      if(m1.count(c)){
        if(m2.count(c)){
          m2[c]++;
        }else{
          m2[c] = 1;
        }
      }
    }
    for(auto p1 : m1){
      m1[p1.first] = min(m1[p1.first], m2[p1.first]);
    }
  }
  string ans = "";
  for(auto p : m1){
    for(int i = 0; i < p.second; i++){
      ans += p.first;
    }
  }
  sort(ans.begin(), ans.end());
  cout << ans << endl;
  
  
}
      
    
