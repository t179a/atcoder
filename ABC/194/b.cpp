#include <bits/stdc++.h>
using namespace std;
 
 int main(){
   int A, B; cin >> A >> B;
   int C = A + B;
   int ans;
   if(C >= 15 && B >= 8){
     ans = 1;
   }else if(C >= 10 && B >= 3){
     ans = 2;
   }else if(C >= 3){
     ans = 3;
   }else{
     ans = 4;
   }
   cout << ans << endl;
 }
