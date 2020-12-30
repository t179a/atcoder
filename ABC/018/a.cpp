#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(3);
  for(int i = 0; i < 3; i++){
    cin >> vec.at(i);
  }
  for(int i = 0; i < 3; i++){
    int ans = 0;
    for(int j = 0; j < 3; j++){
      if(vec.at(i) <= vec.at(j)){
        ans++;
      }
    }
    cout << ans << endl;
  }
}
