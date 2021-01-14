#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  /*1回あたりの実行時間
  1900 * M + 100 * (N - M) = 1800*M +100*N
  
  Mケース全てで正解する確率
  1/pow(2,M);
  */
  
  int ans = (1800 * M + 100 * N) * pow(2, M);
  cout << ans << endl;
}
