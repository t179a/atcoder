#include <bits/stdc++.h>
using namespace std;

int main(){
  char A, B;
  cin >> A >> B;
  char ans;
  if(A == 'H'){
    ans = B;
  }else{
	ans = B == 'H' ? 'D' : 'H';
  }
  cout << ans << endl;
}
