#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int64_t> vec(100);
  vec.at(0) = 2;
  vec.at(1) = 1;
  for(int i = 2; i < 100; i++){
	vec.at(i) = vec.at(i-1) + vec.at(i-2);
  }
  cout << vec.at(N) << endl;
}
