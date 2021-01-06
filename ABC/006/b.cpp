#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t n;
  cin >> n;
  vector<int64_t> vec(n+2);
  vec.at(0) = 0;
  vec.at(1) = 0;
  vec.at(2) = 1;
  for(int i = 3; i <= n+1; i++){
    vec.at(i) = (vec.at(i-3) + vec.at(i-2) + vec.at(i-1))%10007;
  }
  cout << vec.at(n-1) % 10007 << endl;
}
