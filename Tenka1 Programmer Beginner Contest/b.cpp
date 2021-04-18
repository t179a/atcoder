#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B, K; cin >> A >> B >> K;
  
  int count = 0;
  while(count != K){
    if(count % 2 == 0){
      if(A % 2 != 0){
        A--;
      }
      B += A/2;
      A /= 2;
    }else{
      if(B % 2 != 0){
        B--;
      }
      A += B/2;
      B /= 2;
    }
    count++;
  }
  cout << A << " " << B << endl;
  return 0;
}
