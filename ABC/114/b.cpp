#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len = S.size();
  int diff = 1000;
  for(int i = 0; i < len-2; i++){
    int num = stoi(S.substr(i, 3));
    if(diff > abs(num - 753)){
      diff = abs(num - 753);
    }
  }
  cout << diff << endl;
}
    
