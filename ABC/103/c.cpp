#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int ans = 0;
  for(int i = 0; i < N; i++){
    ans += (vec.at(i)-1);
  }
  cout << ans << endl;
}
