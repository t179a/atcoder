#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, K;
  cin >> N >> K;
  map<int64_t, int64_t> M;
  for(int i = 0; i < N; i++){
    int64_t a, b;
    cin >> a >> b;
    if(M.count(a)){
      M[a] += b;
    }else{
      M[a] = b;
    }
  }
  vector<int64_t> A;
  for(auto p : M){
    A.push_back(p.first);
  }
  int64_t sum = 0;
  int64_t i = -1;
  for(auto p : M){
    i++;
    sum += p.second;
    if(sum >= K){
      break;
    }
  }
  cout << A.at(i) << endl;
}
