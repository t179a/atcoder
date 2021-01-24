#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  X *= 100;
  vector<int> v(N);
  vector<int> p(N);
  for(int i = 0; i < N; i++){
    cin >> v.at(i) >> p.at(i);
  }
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += v.at(i) * p.at(i);
    if(sum > X){
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
