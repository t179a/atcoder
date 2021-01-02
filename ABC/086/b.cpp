#include <bits/stdc++.h>
using namespace std;

int main(){
  string a, b;
  cin >> a >> b;
  int num = stoi(a + b);
  bool boo = false;
  for(int i = 0; i <= sqrt(num); i++){
    if(i * i == num){
      boo = true;
    }
  }
  string ans = boo ? "Yes" : "No";
  cout << ans << endl;
}
  
