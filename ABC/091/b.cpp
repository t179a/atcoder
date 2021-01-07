#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<string, int> map_c;
  for(int i = 0; i < N; i++){
    string name;
    cin >> name;
    map_c[name]++;
  }
  int M;
  cin >> M;
  for(int i = 0; i < M; i++){
    string name;
    cin >> name;
    map_c[name]--;
  }
  int ans = 0;
  for(auto p : map_c){
    ans = max(ans, p.second);
  }
  cout << ans << endl;
  
}
