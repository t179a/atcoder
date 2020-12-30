#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<string> vecs(3);
  for(int i = 0; i < 3; i++){
    cin >> vecs.at(i);
  }
  string ans = "";
  for(int i = 0; i < 3; i++){
    ans += (char) vecs.at(i).at(0) - 32;
  }
  cout << ans << endl;
}
