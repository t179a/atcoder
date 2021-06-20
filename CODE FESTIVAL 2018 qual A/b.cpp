#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, M, A, B;
  cin >> N >> M >> A >> B;
  set<int> Set;
  for(int i = 0; i < M; i++){
    int L, R; cin >> L >> R;
    for(int p = L; p <= R; p++){
      Set.insert(p);
    }
  }
  int sum = Set.size();
  int ans = sum * A + (N - sum) * max(A, B);
  cout << ans << endl;
}
