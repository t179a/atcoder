#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  for(int i = 1; i <= N; i++){
    string S = to_string(i);
    int len = S.size();
    int sum = 0;
    for(int j = 0; j < len; j++){
      sum += (S.at(j) - '0');
    }
    if(sum >= A && sum <= B){
      ans += i ;
    }
  }
  cout << ans << endl;
}
