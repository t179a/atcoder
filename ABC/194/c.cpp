#include <bits/stdc++.h>
using namespace std;
 
 int main(){
   int64_t N; cin >> N;
   vector<int64_t> A(N);
   int64_t sum = 0;
   for(int i = 0; i < N; i++){
     cin >> A.at(i);
     sum += A.at(i);
   }
   
   int64_t ans = 0;
   for(int i = 0; i < N; i++){
     ans += A.at(i) * A.at(i) * (N - 1);
   }
   for(int i = 0; i < N; i++){
     sum -= A.at(i);
     ans += -2 * A.at(i) * sum;
   }
   cout << ans << endl;
 }
   
     
