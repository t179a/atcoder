#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int sum = 0;
  for(int i = 0; i < N; i++) {
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 == num2) {
      sum++;
    }else{
      sum = 0;
    }
    if(sum ==3) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
