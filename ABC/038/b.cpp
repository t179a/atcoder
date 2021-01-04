#include <bits/stdc++.h>
using namespace std;

int main(){
  set<int> si;
  for(int i = 0; i < 2; i++){
    int num;
    cin >> num;
    si.insert(num);
  }
  string ans = "NO";
  for(int i = 0; i < 2; i++){
    int num;
    cin >> num;
    if(si.count(num)){
      ans = "YES";
    }
  }
  cout << ans << endl;
}
