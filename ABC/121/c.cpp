#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<pair<int64_t, int64_t>> vec;
  for(int i = 0; i < N; i++){
    int64_t a, b;
    cin >> a >> b;
    vec.emplace_back(a,b);
  }
  sort(vec.begin(), vec.end());
  int64_t sum_n = 0;
  int64_t total_p = 0;
  for(int i = 0; i < N; i++){
    if(sum_n + vec.at(i).second <= M){
      sum_n += vec.at(i).second;
      total_p += vec.at(i).first * vec.at(i).second;
    }else{
      total_p += vec.at(i).first * (M - sum_n);
      sum_n = M;
      cout << total_p << endl;
      return 0;
    }
    if(sum_n == M){
      cout << total_p << endl;
      return 0;
    }
  }
      
}
