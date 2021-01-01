#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int diff = b - a;
  int hb = 0;
  for(int i = 0; i <= diff; i++){
    hb += i;
  }
  cout << hb - b << endl;
}
