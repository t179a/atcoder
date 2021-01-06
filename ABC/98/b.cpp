#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int ans = 0;
  for(int i = 0; i < N; i++){
    set<char> sc1;
    set<char> sc2;
    int sum = 0;
    for(int j = 0; j < i; j++){
      sc1.insert(S.at(j));
    }
    for(int k = i; k < N; k++){
      if(sc1.count(S.at(k)) && (!sc2.count(S.at(k)))){
        sum++;
        sc2.insert(S.at(k));
      }
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
}
                
