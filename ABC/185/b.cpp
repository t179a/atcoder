#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M, T;
  cin >> N >> M >> T;
  int N1 = N;
  int time = 0;
  bool ans = true;
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    N -= (a - time);
    if(N <= 0){
	  ans = false;
    }
    N = min(N1, N + (b-a));
    time = b;
  }
  N -= (T - time);
  if(N <= 0){
	  ans = false;
  }
  if(ans){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
  
