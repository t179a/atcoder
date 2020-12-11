#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;
  for(int i = 1; i <= N - 1; i++){
    for(int j = 1; j <= sqrt(i); j++){
      if(i % j == 0){
        int a = j;
        int b = i/j;
        if(a != b){
          sum += 2;
        }else{
          sum++;
        }
      }
    }
  }
  cout << sum << endl;
}
