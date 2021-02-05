#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, Q; cin >> N >> Q;
  vector<int> v(N+1, 0);
  for(int i = 0; i < Q; i++){
    int left, right;
    cin >> left >> right;
    left--; right--;
    v.at(left)++;
    v.at(right + 1)--;
  }
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += v.at(i);
    if(sum % 2 == 0){
      cout << 0;
    }else{
      cout << 1;
    }
  }
  cout << endl;
}
    
    
