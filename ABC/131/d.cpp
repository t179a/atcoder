#include <bits/stdc++.h>
using namespace std;

int main(){
  int N; cin >> N;
  vector<pair<int64_t,int64_t>> P;
  for(int i = 0; i < N; i++){
    int64_t a, b; cin >> a >> b;
    P.emplace_back(a, b);
  }
  
  sort(P.begin(), P.end(), [](pair<int64_t,int64_t> p1, pair<int64_t,int64_t> p2){
    return p1.second < p2.second;
  });
  
  int64_t sum = 0;
  bool ok = true;
  for(int i = 0; i < N; i++){
    sum += P.at(i).first;
    if(sum > P.at(i).second){
      ok = false;
    }
  }
  if(ok){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
}
