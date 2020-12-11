#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for(int i = 0; i < N; i++) {
    int num;
    cin >> num;
    if(num % 2 == 0 && num % 3 != 0 && num % 5 != 0){
      cout << "DENIED" << endl;
      return 0;
    }
  }
  cout << "APPROVED" << endl;
  return 0;
}
