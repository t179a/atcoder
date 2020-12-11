#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, K, M;
  cin >> N >> K >> M;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
	cin >> vec.at(i);
  }
  int sum = 0;
  for(int i = 0; i < N; i++){
    sum += vec.at(i);
  }
  int ans;
  int lastscore = M * N - sum;
  if(lastscore > K){
    ans = -1;
  }else{
    ans = lastscore < 0 ? 0 : lastscore;
  }
  cout << ans << endl;

  
}
