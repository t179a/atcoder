#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> d(N);
  
  for(int i = 0; i < N; i++) {
    cin >> d.at(i);
  }
  sort(d.begin(), d.end());
  
  int sum = 0;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < i; j++) {
      for(int k = 0; k < j; k++) {
        if((d.at(i) != d.at(j) && d.at(j) != d.at(k))&&(d.at(k) + d.at(j) > d.at(i))){
          sum++;
        }
      }
    }
  }
  
  cout << sum << endl;
}
