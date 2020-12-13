#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(4);
  for(int i = 0; i < 4; i++){
	cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  cout << vec.at(0) << endl;
  return 0;
}
