#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, X;
  cin >> N >> M >> X;
  vector<int> vec(N+1,0);
  for(int i = 0; i < M; i++){
	int num;
    cin >> num;
    vec.at(num) = 1;
  }
  int sum = 0;
  for(int i = 0; i <= X; i++){
	sum += vec.at(i);
  }
  int ans = min(sum, M-sum);
  cout << ans << endl;
}
  
  
