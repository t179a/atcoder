#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  if(N % 2 != 0){
    cout << "error" << endl;
    return 0;
  }
  vector<int> v;
  for(int i = 0; i < N; i++){
    int m; cin >> m;
    v.push_back(m);
  }
  int sum_rest = 0;
  for(int i = 1; i < N - 1; i += 2){
    sum_rest += v.at(i+1) - v.at(i);
  }
  int ans = v.at(N - 1) - v.at(0) - sum_rest;
  cout << ans << endl;
}
