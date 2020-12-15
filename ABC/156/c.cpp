#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  
  int sum = 100000000;
  for(int i = 1; i <=100; i++){
    int tmp = 0;
    for(int j = 0; j < N; j++){
      tmp += abs(vec.at(j) - i) * abs(vec.at(j) - i);
    }
    sum = min(sum, tmp);
  }
  cout << sum << endl;
}
