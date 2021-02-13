#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  int64_t depth = -1;
  int64_t c = N;
  while(c != 0){
    c /= 2;
    depth++;
  }
  int64_t x = 1;
  while(1){
    x = 2 * x + (depth + 1) % 2;
    if(x > N){
      cout << "Aoki" << endl;
      return 0;
    }
    x = 2 * x + (depth)%2;
    if(x > N){
      cout << "Takahashi" << endl;
      return 0;
    }
  }
}
    
