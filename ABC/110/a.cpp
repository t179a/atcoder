#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(3);
  for(int i = 0; i < 3; i++){
	cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  int ans = vec.at(0) * 10 + vec.at(1) + vec.at(2);
  cout << ans << endl;
}
