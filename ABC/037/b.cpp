#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  cin >> N >> Q;
  vector<int> vec(N, 0);
  for(int i = 0; i < Q; i++){
    int l, r, t;
    cin >> l >> r >> t;
    for(int j = l-1; j <= r-1; j++){
      vec.at(j) = t;
    }
  }
  for(int i = 0; i < N; i++){
    cout << vec.at(i) << endl;
  }
}
    
