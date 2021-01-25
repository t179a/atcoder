#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<set<int>> v(N, set<int>());
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    v.at(a).insert(b);
    v.at(b).insert(a);
  }
  vector<int> o(N-1);
  for(int i = 1; i < N; i++) o.at(i-1) = i;
  
  int ans = 0;
  do{
    int count = 0;
    for(int i = 0; i < N-1; i++){
      if(i == 0){
        if(v.at(0).count(o.at(i))) count++;
      }else if(v.at(o.at(i-1)).count(o.at(i))) count++;
    }
    if(count == N - 1) ans++;
  }while(next_permutation(o.begin(), o.end()));
  
  cout << ans << endl;
}
      
