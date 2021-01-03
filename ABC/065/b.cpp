#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  vector<int> lighted(N, 0);
  int tinkle = 1;
  lighted.at(0) = 1;
  for(int i = 0; i < N; i++){
    tinkle = vec.at(tinkle-1);
    lighted.at(tinkle - 1) = 1;
    if(lighted.at(1) ==  1){
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}
  
    
  
