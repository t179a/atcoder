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
  int half = N/2-1;
  int abc_max = vec.at(half);
  int agc_min = vec.at(half + 1);
  int ans = agc_min - abc_max;
  cout << ans << endl;
}
  
