#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, T;
  cin >> N >> T;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
	cin >> vec.at(i);
  }
  int ans = 0;
  for(int i = 0; i < N-1; i++){
    ans += min(T, vec.at(i + 1)-vec.at(i));
  }
  ans += T;
  cout << ans << endl;
}
  
