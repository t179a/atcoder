#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K; cin >> N >> K;
  vector<int> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  for(int i = 0; i < N - K; i++){
    if(A.at(i) < A.at(i + K)){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}
