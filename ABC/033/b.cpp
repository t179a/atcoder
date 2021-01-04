#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int, string>> vec;
  int sum = 0;
  for(int i = 0; i < N; i++){
    string name;
    int popu;
    cin >> name >> popu;
    pair<int, string> p = {popu, name};
    vec.push_back(p);
    sum += popu;
  }
  sort(vec.begin(), vec.end());
  string ans = "atcoder";
  if(vec.at(N-1).first > sum/2){
    ans = vec.at(N-1).second;
  }
  cout << ans << endl;
}
  
  
