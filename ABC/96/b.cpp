#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  vector<int> vec = {a, b, c};
  for(int i = 0; i < k; i++){
    sort(vec.begin(), vec.end());
    vec.at(2) *= 2;
  }
  int sum = 0;
  for(int i = 0; i < 3; i++){
    sum += vec.at(i);
  }
  cout << sum << endl;
}
  
