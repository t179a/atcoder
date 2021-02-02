#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  set<char> S;
  for(int i = 0; i < N; i++){
    char c;
    cin >> c;
    S.insert(c);
  }
  
  for(int i = N; i < 10 * N; i++){
    string t = to_string(i);
    bool ok = true;
    for(int k = 0; k < (int) t.size(); k++){
      if(S.count(t.at(k))){
        ok = false;
      }
    }
    if(ok){
      cout << i << endl;
      return 0;
    }
  }
}
