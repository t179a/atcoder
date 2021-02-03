#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T; cin >> S >> T;
  map<char, char> M, N;
  for(int i = 0; i < (int)S.size(); i++){
    char s = S.at(i);
    char t = T.at(i);
    if((M.count(s) && M[s] != t) || (N.count(t) && N[t] !=s)){
      cout << "No" << endl;
      return 0;
    }
    M[s] = t;
    N[t] = s;
  }
  cout << "Yes" << endl;
}
  
