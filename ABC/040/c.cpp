#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  vector<int> dp(N);
  dp.at(0) = 0;
  dp.at(1) = abs(A.at(1) - A.at(0));
  for(int i = 2; i < N; i++){
    dp.at(i) = min(dp.at(i-2) + abs(A.at(i) - A.at(i-2)), dp.at(i-1) + abs(A.at(i)-A.at(i-1)));
  }
  cout << dp.at(N-1) << endl;
}
