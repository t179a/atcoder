#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      int result = i * j;
      if(result == N){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
