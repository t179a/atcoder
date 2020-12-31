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
  int n_max = vec.at(N-1);
  int sum_nm = 0;
  for(int i = 0; i < N-1; i++){
	sum_nm += vec.at(i);
  }
  string ans = "No";
  if(sum_nm > n_max){
    ans = "Yes";
  }
  cout << ans << endl;
}
