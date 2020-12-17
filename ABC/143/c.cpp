#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int sum = 0;
  for(int i = 0; i < N-1; i++){
    if(S.at(i) == S.at(i+1)){
      sum++;
    }
  }
  int ans = N - sum;
  cout << ans << endl;
}
