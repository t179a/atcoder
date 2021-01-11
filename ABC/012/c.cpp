#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      sum += i * j;
    }
  }
  int M = sum - N;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      if(i * j == M){
        cout << i << " " << "x" << " " << j << endl;
      }
    }
  }
  
}
