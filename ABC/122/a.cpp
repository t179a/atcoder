#include <bits/stdc++.h>
using namespace std;

int main(){
  char c;
  cin >> c;
  char ans;
  if(c == 'A'){
    ans = 'T';
  }else if(c == 'G'){
	ans = 'C';
  }else if(c == 'C'){
    ans = 'G';
  }else if(c == 'T'){
    ans = 'A';
  }
  cout << ans << endl;
}
