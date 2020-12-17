#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec_o(N);
  vector<int> vec_m(N);
  vector<int> vec_b(N-1);
  for(int i = 0; i < N; i++){
    cin >> vec_o.at(i);
  }
  for(int i = 0; i < N; i++){
    cin >> vec_m.at(i);
  }
  for(int i = 0; i < N-1; i++){
    cin >> vec_b.at(i);
  }
  int sum_m = 0;
  for(int i = 0; i < N; i++){
    sum_m += vec_m.at(i);
  }
  for(int i = 0; i < N - 1; i++){
    if(vec_o.at(i) + 1 == vec_o.at(i+1) ){
      sum_m += vec_b.at(vec_o.at(i)-1);
    }
  }
  cout << sum_m << endl;
}
  
