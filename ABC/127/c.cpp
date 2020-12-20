#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> vec(N+1, 0);
  for(int i = 0; i < M; i++){
    int l,r;
    cin >> l >> r;
    vec.at(l-1)++;
    vec.at(r)--;
  }
  vector<int> vec_s(N+1);
  vec_s.at(0) = vec.at(0);
  for(int i = 1; i < N+1; i++){
    vec_s.at(i) = vec_s.at(i-1) + vec.at(i);
  }
  int ans = 0;
  for(int i = 0; i < N+1; i++){
    if(vec_s.at(i) == M){
     ans++;
    }
  }
  cout << ans << endl;
}
      
