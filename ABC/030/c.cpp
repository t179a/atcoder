#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M; cin >> N >> M;
  int X, Y; cin >> X >> Y;
  queue<int> A;
  queue<int> B;
  for(int i = 0; i < N; i++){
    int a; cin >> a;
    A.push(a);
  }
   for(int i = 0; i < M; i++){
    int b; cin >> b;
    B.push(b);
  }
  int ans = 0;
  
  while(true){
    if(B.empty()) break;
    int a = A.front();
    A.pop();
    bool ok = true;
    while(B.front() < a + X){
      B.pop();
      if(B.empty()) {
        ok = false;
        break;
      }
    }
    if(!ok) break;
    ans++;
    if(A.empty()) break;
    while(A.front() < B.front() + Y){
      A.pop();
      if(A.empty()){
        ok = false;
        break;
      }
    }
    if(!ok) break;
    B.pop();
  }
  cout << ans << endl;
}
