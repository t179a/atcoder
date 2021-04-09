#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, K; cin >> A >> B >> C >> K;
  
  int count = 0;
  while(count != K+1){
    if(A >= B){
      B *= 2;
      count++;
      continue;
    }else if(B >= C){
      C *= 2;
      count++;
      continue;
    }else{
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
