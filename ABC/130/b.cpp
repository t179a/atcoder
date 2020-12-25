#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, X;
  cin >> N >> X;
  vector<int> vec(N+1);
  vec.at(0) = 0;
  for(int i = 1; i < N+1; i++){
    int l;
    cin >> l;
    vec.at(i) = vec.at(i-1) + l;
  }
  int ans = 0;
  for(int i = 0; i < N+1; i++){
    if(X >= vec.at(i)){
	  ans++;
    }
  }
  cout << ans << endl;
}
                  
    
