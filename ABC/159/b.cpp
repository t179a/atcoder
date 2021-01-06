#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int N = S.size();
  string S1 = S.substr(0, (N-1)/2);
  string S2 = S.substr((N+3)/2 -1);
  int len_s1 = S1.size();
  int len_s2 = S2.size();
  for(int i = 0; i < N; i++){
    if(S.at(i) == S.at(N-1-i)){
      continue;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  for(int i = 0; i < len_s1; i++){
    if(S.at(i) == S1.at(len_s1-1-i)){
      continue;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  for(int i = 0; i < len_s2; i++){
    if(S.at(i) == S.at(len_s2-1-i)){
      continue;
    }else{
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
