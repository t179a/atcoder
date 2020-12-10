#include <bits/stdc++.h>
using namespace std;

int main() {
  int K;
  string S;
  cin >> K >> S;
  int lenS = S.size();
  if(lenS <= K) {
    cout << S << endl;
    return 0;
  }else{
    cout << S.substr(0, K) + "..." << endl;
    return 0;
  }
}
  
