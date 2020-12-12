#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int>vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int64_t sum = 0;
  for(int i = 0; i < N - 1; i++){
    if(vec.at(i) > vec.at(i+1)){
      int64_t diff = vec.at(i) - vec.at(i+1);
      vec.at(i+1) += diff;
      sum += diff;
    }
  }
  cout << sum << endl;
}
    
