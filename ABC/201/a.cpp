#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v;
  for(int i = 0; i < 3; i++){
    int a; cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  string ans = "No";
  if(v.at(2) - v.at(1) == v.at(1) - v.at(0)){
    ans = "Yes";
  }
  cout << ans << endl;
}
