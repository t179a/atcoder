#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  int num = 1;
  for(int i = 0; i < N; i++){
    num = min(num + K, num * 2);
  }
  cout << num << endl;
}
