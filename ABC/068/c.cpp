#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  set<int> s1;
  set<int> sN;
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    if(a == 1){
      s1.insert(b);
    }
    if(b == N){
      sN.insert(a);
    }
  }
  for(auto value : s1){
    if(sN.count(value)){
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
