#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;
  int sum = 0;
  int num = 0;
  while(x > sum){
    num++;
    sum += num;
  }
  cout << num << endl;
}
