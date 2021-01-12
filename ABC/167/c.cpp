#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, X;
  cin >> N >> M >> X;
  int d[N][M+1];
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M+1; j++){
      cin >> d[i][j];
    }
  }
  int ans = 1000000000;
  bool ok = true;
  for(int i = 0; i < (1 << N); i++){
    bitset<12> b(i);
    int sum_p = 0;
    vector<int> vec(M, 0);
    for(int j = 0; j < N; j++){
      if(b.test(j)){
        sum_p += d[j][0];
        for(int k = 0; k < M; k++){
          vec.at(k) += d[j][k+1];
        }
      }
    }
    sort(vec.begin(), vec.end());
    if(vec.at(0) >=X){
      ans = min(ans, sum_p);
      ok = false;
    }
  }
  if(ok){
    cout << -1 << endl;
    return 0;
  }else{
    cout << ans << endl;
  }
}
