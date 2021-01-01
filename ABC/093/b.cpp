#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, K;
  cin >> A >> B >> K;
  int sum = B - A + 1;
  if(sum <= 2 * K){
    for(int i = A; i <= B; i++){
      cout << i << endl;
    }
  }else{
    for(int i = A; i <= A + K - 1; i++){
      cout << i << endl;
    }
    for(int j = B - K + 1; j <= B; j++){
      cout << j << endl;
    }
  }
}
