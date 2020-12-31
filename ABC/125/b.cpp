#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> value(N);
  vector<int> cost(N);
  for(int i = 0; i < N; i++){
	cin >> value.at(i);
  }
  for(int i = 0; i < N; i++){
	cin >> cost.at(i);
  }
  int ans = 0;
  for(int i = 0; i < (1 << N); i++){
    bitset<20> b(i);
    int sumv = 0;
    int sumc = 0;
    for(int j = 0; j < N; j++){
      if(b.test(j)){
		sumv += value.at(j);
        sumc += cost.at(j);
      }
    }
    ans = max(ans, sumv - sumc);
  }
  cout << ans << endl;
}
