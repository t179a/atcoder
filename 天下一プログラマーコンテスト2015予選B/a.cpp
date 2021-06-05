#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int64_t> v;
  v.push_back(100);
  v.push_back(100);
  v.push_back(200);
  for(int64_t i = 3; i <= 20; i++){
    int64_t ai = 0;
    for(int p = i - 3; p < i; p++){
      ai += v.at(p);
    }
    v.push_back(ai);
  }
  cout << v.at(19) << endl;
}
