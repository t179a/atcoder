#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec(5);
  for(int i = 0; i < 5; i++) {
    cin >> vec.at(i);
  }
  int ans = 0;
  for(int i = 0; i < 5; i++) {
    if(vec.at(i) == 0){
      ans = i+1;
    }
  }
  
  cout << ans << endl;
}
