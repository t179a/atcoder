#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N; cin >> N;
  map<int64_t,int64_t> map_s; // num,sum
  for(int i = 0; i < N; i++){
    int64_t A; cin >> A;
    map_s[A]++;
  }
  int64_t total = 0;
  for(auto p : map_s){
    total += p.first * p.second;
  }
  
  int64_t Q; cin >> Q;
  for(int i = 0; i < Q; i++){
    int64_t b, c; cin >> b >> c;
    if(map_s.count(b)){
      int64_t sum = map_s[b];
      total -= sum * b;
      map_s.erase(b);
      map_s[c] += sum;
      total += c * sum;
      cout << total << endl;
    }else{
      cout << total << endl;
    }
  }
  return 0;
}
        
        
