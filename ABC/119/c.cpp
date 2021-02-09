#include <bits/stdc++.h>
using namespace std;

int INF = 1000000007;
void chmin(int &a, int b){ if(a > b) a = b;}
int N, A, B, C;
vector<int> L;

int rec(int i, int a, int b, int c){
  if(i == N){
    if(!a || !b || !c) return INF;
    return abs(a - A) + abs(b - B) + abs(c - C);
  }
  int res = rec(i + 1, a, b, c);
  chmin(res, rec(i+1, a + L[i], b, c) + (a ? 10 : 0));
  chmin(res, rec(i+1, a, b + L[i], c) + (b ? 10 : 0));
  chmin(res, rec(i+1, a, b, c + L[i]) + (c ? 10 : 0));
  return res;
}
    
int main(){
  cin >> N >> A >> B >> C;
  L.resize(N);
  for(int i = 0; i < N; i++)cin >> L[i];
  
  cout << rec(0,0,0,0) << endl;
}
        
      
  
  
