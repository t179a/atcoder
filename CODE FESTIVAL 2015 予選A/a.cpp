#include<bits/stdc++.h>
using namespace std;

int main(){
  string S; cin >> S;
  int len = S.size();
  S.at(len - 1) = '5';
  cout << S << endl;
}
