#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> vs;
  for(int i = 1; i <= 1000; i++){
    string s = to_string(i);
    vs.push_back(s);
  }
  sort(vs.begin(), vs.end());
  for(int i = 0; i < 1000; i++){
    cout << vs.at(i) << endl;
  }
  return 0;
}
