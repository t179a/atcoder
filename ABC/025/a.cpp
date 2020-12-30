#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int N;
  cin >> S >> N;
  int len_s = S.size();
  int sum = len_s * len_s;
  vector<string> vec;
  for(int i = 0; i < len_s; i++){
    for(int j = 0; j < len_s; j++){
	  string name ="";
      name += S.at(i);
      name += S.at(j);
      vec.push_back(name);
    }
  }
  cout << vec.at(N-1) << endl;
}
  
