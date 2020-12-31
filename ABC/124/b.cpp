#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  int num_max = 0;
  int ans = 0;
  for(int i = 0; i < N; i++){
	if(num_max <= vec.at(i)){
      ans++;
      num_max = max(num_max, vec.at(i));
    }
  }
  cout << ans << endl;
}
