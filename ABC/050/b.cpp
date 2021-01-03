#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int M;
  cin >> M;
  for(int i = 0; i < M; i++){
    int p, x;
    cin >> p >> x;
    int sum = 0;
    for(int i = 0; i < N; i++){
      if(i == p - 1){
        sum += x;
      }else{
        sum += vec.at(i);
      }
    }
    cout << sum << endl;
  }
}
