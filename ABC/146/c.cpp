#include <bits/stdc++.h>
using namespace std;

const long long INF = 1000000001;

int main(){
  long long A, B, X;
  cin >> A >> B >> X;
  
  long long left = 0, right = INF;
  while(right - left > 1){
    long long mid = (left + right) / 2;
    
    bool ok = true;
    
    long long len = (to_string(mid)).size();
    long long sum = A * mid + B * len;
    if(sum > X) ok = false;
    
    if(ok) left = mid;
    else right = mid;
  }
  cout << left << endl;
}
    
