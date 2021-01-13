#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  map<int, int> m;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    m[num]++;
  }
  vector<int> vec;
  for(auto p : m){
    vec.push_back(p.second);
  }
  sort(vec.begin(), vec.end());
  int len = m.size();
  int ans = 0;
  for(int i = 0; i < len - K; i++){
    ans += vec.at(i);
  }
  cout << ans << endl;
}
    
