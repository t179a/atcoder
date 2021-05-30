#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> vs;
  for(int i = 0; i < 15; i++){
    string s; cin >> s;
    vs.push_back(s);
  }
  sort(vs.begin(), vs.end());
  cout << vs.at(6) << endl;
}
