#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  double ans;
  if(N % 2 == 0){
    ans = 1.0/2.0;
  }else{
    ans =double (N+1.0)/2.0/N;
  }
  printf("%.10f\n", ans);
}
