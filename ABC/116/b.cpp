#include <bits/stdc++.h>
using namespace std;

int main(){
  int s;
  cin >> s;
  set<int> sn = {s};
  int num = s;
  int ans;
  for(int i = 2; i <= 1000000; i++){
    if(num % 2 == 0){
      int n = num/2;
      num = n;
      if(sn.count(num)){
        cout << i << endl;
        return 0;
      }
      sn.insert(num);
    }else{
      int n = num * 3 + 1;
      num = n;
      if(sn.count(num)){
        cout << i << endl;
        return 0;
      }
      sn.insert(num);
    }
  }
}
