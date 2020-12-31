#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  int sum = 0;
  for(int i = 0; i < N; i++){
    if(i == N - 1){
      sum += vec.at(i)/2;
    }else{
      sum += vec.at(i);
    }
  }
  cout << sum << endl;
}
