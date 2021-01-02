#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int ans = 10000;
  for(int  i = 0; i < N; i++){
    int count = 0;
    while(vec.at(i) % 2 == 0){
      vec.at(i) /= 2;
      count++;
    }
    ans = min(ans, count);
  }
  cout << ans << endl;
}
