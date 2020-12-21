#include <bits/stdc++.h>
using namespace std;

int main(){
  int R;
  cin >> R;
  string ans = "ABC";
  if(R >= 2800){
	ans = "AGC";
  }else if(R >=1200){
	ans = "ARC";
  }
  cout << ans << endl;
}
