#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec_b(N-1);
  for(int i = 0; i < N-1; i++){
	cin >> vec_b.at(i);
  }
  vector<int> vec_a(N);
  vec_a.at(0) = vec_b.at(0);
  for(int i = 1; i < N-1; i++){
    vec_a.at(i) = min(vec_b.at(i), vec_b.at(i-1));
  }
  vec_a.at(N-1) = vec_b.at(N-2);
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += vec_a.at(i);
  }
  cout << sum << endl;
  
}
