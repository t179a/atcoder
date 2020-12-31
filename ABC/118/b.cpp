#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> vec(M);
  for(int i = 0; i < N; i++){
	int K;
    cin >> K;
    for(int j = 0; j < K; j++){
      int num;
      cin >> num;
      vec.at(num - 1)++;
    }
  }
  int ans = 0;
  for(int i = 0; i < M; i++){
	if(vec.at(i) == N){
      ans++;
    }
  }
  cout << ans << endl;
}
