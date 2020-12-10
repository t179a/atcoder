#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<double> vec(n);
  double sum;
  for(int i = 0; i < n; i++) {
    cin >> vec.at(i);
    sum += vec.at(i);
  }
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  bool result = vec.at(m-1) >= sum/(4*m);
  string ans;
  if(result){
	ans = "Yes";
  }else{
    ans = "No";
  }
  
  cout << ans << endl;
}
