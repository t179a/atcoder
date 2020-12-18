#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++){
	cin >> vec.at(i);
  }
  int ans = 0;
  for(int i = 0; i < n-2; i++){
    int n_max = max(vec.at(i), max(vec.at(i+1), vec.at(i+2)));
    int n_min = min(vec.at(i), min(vec.at(i+1), vec.at(i+2)));
    if(vec.at(i+1) != n_max && vec.at(i+1) != n_min){
      ans++;
    }
  }
  cout << ans << endl;
}
