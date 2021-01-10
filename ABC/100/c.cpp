#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int sum = 0;
  for(int i = 0; i < N; i++){
    while(vec.at(i) % 2 == 0){
      vec.at(i) /= 2;
      sum++;
    }
  }
  cout << sum << endl;
}
      
