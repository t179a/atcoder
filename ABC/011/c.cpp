#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, a, b, c; cin >> N >> a >> b >> c;
  set<int> S = {a, b, c};
  int count = 0;
  if(S.count(N)){
    cout << "NO" << endl;
    return 0;
  }
  while(N != 0){
    if((!S.count(N-3)) && N-3 >= 0){
      N -= 3;
      count++;
    }else if(!(S.count(N-2)) && N-2 >= 0){
      N -= 2;
      count++;
    }else if((!S.count(N-1)) && N-1 >= 0){
      N -= 1;
      count++;
    }else{
      cout << "NO" << endl;
      return 0;
    }
  }
  if(count > 100){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
  }
}
    
