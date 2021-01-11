#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t X, Y;
  cin >> X >> Y;
  int64_t count = 1;
  for(int i = 0; i < 100000; i++){
    X *= 2;
    if(X <= Y){
      count++;
    }else{
      cout << count << endl;
      return 0;
    }
  }
  cout << count << endl;
}
  
