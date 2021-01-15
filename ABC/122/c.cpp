#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q;
  string S;
  cin >> N >> Q >> S;
  vector<int> vec(N);
  int sum = 0;
  for(int i = 0; i < N-1; i++){
    if(S.at(i) == 'A' && S.at(i+1) == 'C'){
      sum++;
      vec.at(i+1) = sum;
    }else{
      vec.at(i+1) = sum;
    }
  }
  for(int i = 0; i < Q; i++){
    int l, r;
    cin >> l >> r;
    int ans = vec.at(r-1) - vec.at(l-1);
    cout << ans << endl;
  }
}
    
