#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  map<int, int> m;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    m[num]++;
  }
  int ans = 0;
  for(auto p : m){
    if(p.second % 2 == 1){
      ans++;
    }
  }
  cout << ans << endl;
}
