#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K; string S; cin >> N >> K >> S;
  string T = S;
  int index = 0;
  for(int i = 0; i < (int) S.size(); i++){
    char c = T.at(i);
    bool found = false;
    for(int j = i + 1; j < (int)S.size(); j++){
      if(c > T.at(j)){
        int count = 0;
        string S2 = S;
        string T2 = T;
        T2.at(i) = T2.at(j);
        T2.at(j) = c;
        for(int l = 0; l < (int)S.size(); l++){
          if(S2.at(l) != T2.at(l)) count++;
        }
        if(count <= K){
          c = T.at(j);
          index = j;
          found = true;
        }
      }
    }
    if(found){
      T.at(index) = T.at(i);
      T.at(i) = c;
    }
  }
  cout << T << endl;
  return 0;
}
