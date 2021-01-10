#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  int s = pow(10,N-1);
  if(N == 1){
    s = 0;
  }
  int e = pow(10, N);
  vector<int> va(M);
  vector<char> vb(M);
  for(int i = 0; i < M; i++){
    cin >> va.at(i);
    cin >> vb.at(i);
  }
  for(int i = s; i < e; i++){
    string str = to_string(i);
    bool ok = true;
    for(int j = 0; j < M; j++){
      if(str.at(va.at(j)-1) != vb.at(j)){
        ok = false;
      }
    }
    if(ok){
      cout << str << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
    
  
