#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  int ans = 0;
  int num = 1;
  for(int i = 0; i < N; i++){
    if(A.at(i) == num){
      num++;
    }else{
      ans++;
    }
  }
  if(ans == N){
    ans = -1;
  }
  cout << ans << endl;
}
