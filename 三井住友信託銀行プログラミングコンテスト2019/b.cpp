#include<bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  for(int i = 1; i <= N; i++){
    int result = i * 1.08;
    if( result == N){
      cout << i << endl;
      return 0;
    }
  }
  cout << ":(" << endl;
  return 0;
}
