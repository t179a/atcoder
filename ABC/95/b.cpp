#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  int sum = 0;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  sort(vec.begin(), vec.end());
  int num_min = vec.at(0);
  int ans = N + (X - sum)/num_min;
  cout << ans << endl;
}
  
