#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, X, Y;
  cin >> N >> M >> X >> Y;
  vector<int> vx(N);
  vector<int> vy(M);
  for(int i = 0; i < N; i++){
	cin >> vx.at(i);
  }
  for(int i = 0; i < M; i++){
	cin >> vy.at(i);
  }
  sort(vx.begin(), vx.end());
  sort(vy.begin(), vy.end());
  int zs = vx.at(N-1) + 1;
  int ze = vy.at(0);
  bool b = false;
  for( ; zs <= ze; zs++){
	if(zs > X && zs <=Y){
      b = true;
    }
  }
  string ans = "War";
  if(b){
	ans = "No War";
  }
  
  cout << ans << endl;
}

