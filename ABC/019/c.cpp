#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<int> S;
  for(int i = 0; i < N; i++){
    int a; cin >> a;
    while(a % 2 == 0){
      a /= 2;
    }
    S.insert(a);
  }
  cout << S.size() << endl;
}
    
