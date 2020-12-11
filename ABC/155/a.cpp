#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s;
  for(int i = 0; i < 3; i++ ){
    int num;
    cin >> num;
    s.insert(num);
  }
  int sum = s.size();
  string ans;
  if(sum == 2){
    ans = "Yes";
  }else{
    ans = "No";
  }
  cout << ans << endl;
}
