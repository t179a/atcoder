#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int>> vf(N, vector<int>());
  vector<vector<int>> vp(N, vector<int>());
  for(int i = 0; i < N; i++){
    for(int j = 0; j < 10; j++){
      int f;
      cin >> f;
      vf.at(i).push_back(f);
    }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < 11; j++){
      int p;
      cin >> p;
      vp.at(i).push_back(p);
    }
  }
  int64_t ans = -10000000000000000;
  for(int i = 1; i < (1 << 10); i++){
    bitset<10> b(i);
    int64_t sum = 0;
    for(int p = 0; p < N; p++){
      int count = 0;
      for(int q = 0; q < 10; q++){
        if(b.test(q) && vf.at(p).at(q) == 1){
          count++;
        }
      }
      sum += vp.at(p).at(count);
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
  
