#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  set<int64_t> S;
  vector<int64_t> A(N);
  for(int i = 0; i < N; i++){
    int64_t a;
    cin >> a;
    S.insert(a);
    A.at(i) = a;
  }
  map<int, int> M;
  int i = 0;
  for(auto p : S){
    M[p] = i;
    i++;
  }
  for(int i = 0; i < N; i++){
    cout << M[A.at(i)] << endl;
  }
}
