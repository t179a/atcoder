#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, X;
  cin >> n >> X;
  vector<int> vec(n);
  for(int i = 0; i < n; i++){
    cin >> vec.at(i);
  }
  bitset<20> s(X);
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(s.test(i)){
      ans += vec.at(i);
    }
  }
  cout << ans << endl;
}
    
