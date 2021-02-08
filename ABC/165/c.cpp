#include <bits/stdc++.h>
using namespace std;
int N,M,Q;
vector<int> A, B, C, D;
int ans = 0;
void dfs(vector<int> &P){
  if((int) P.size() == N){
    int sum = 0;
    for(int i = 0; i < Q; i++){
      if(P.at(B.at(i)) - P.at(A.at(i)) == C.at(i)){
        sum += D.at(i);
      }
    }
    ans = max(ans, sum);
    return;
  }
  int last = (P.empty() ? 1 : P.back());
  for(int j = last ; j <= M; j++){
    P.push_back(j);
    dfs(P);
    P.pop_back();
  }
}
    

int main(){
  cin >> N >> M >> Q;
  for(int i = 0; i < Q; i++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;
    b--;
    A.push_back(a);
    B.push_back(b);
    C.push_back(c);
    D.push_back(d);
  }
  vector<int> P;
  dfs(P);
  cout << ans << endl;
}
  
  
