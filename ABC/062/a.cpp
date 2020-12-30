#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  set<int> setA = {1,3,5,7,8,10,12};
  set<int> setB = {4,6,9,11};
  set<int> setC = {2};
  string ans = "No";
  if((setA.count(x) && setA.count(y)) || (setB.count(x) && setB.count(y)) || (setC.count(x) && setC.count(y))){
    ans = "Yes";
  }
  cout << ans << endl;
}
