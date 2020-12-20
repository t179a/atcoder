#include <bits/stdc++.h>
using namespace std;

int main(){
  int X, N;
  cin >> X >> N;
  set<int> s;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    s.insert(num);
  }
  int diff_m = 1000;
  int ans = 1000;
  for(int i = 0; i <= 101; i++){
    if(!s.count(i) && diff_m > abs(X - i)){
      diff_m = abs(X - i);
      ans = i;
    }
  }
  cout << ans << endl;
}
