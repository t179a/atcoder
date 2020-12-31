#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> vb(M);
  for(int i = 0; i < M; i++){
	cin >> vb.at(i);
  }
  int ans = 0;
  for(int i = 0; i < N; i++){
	vector<int> va(M);
    for(int j = 0; j < M; j++){
      cin >> va.at(j);
    }
    int sum = C;
    for(int k = 0; k < M; k++){
	  sum += vb.at(k)*va.at(k);
    }
    if(sum > 0){
      ans++;
    }
  }
  cout << ans << endl;
}
    
