#include<bits/stdc++.h>
using namespace std;


int main(){
  int N;
  cin >> N;
  vector<pair<int64_t, int64_t>> vp;
  for(int i = 0; i < N; i++){
    int64_t a, b;
    cin >> a >> b;
    vp.emplace_back(a, b);
  }
  int64_t taka = 0;
  int64_t aoki = 0;
  for(int i = 0; i < N; i++){
    aoki += vp.at(i).first;
  }
  sort(vp.begin(), vp.end(),[](pair<int64_t,int64_t> a, pair<int64_t,int64_t> b) {
    return (2 * a.first + a.second) > (2 * b.first + b.second);
  });
  for(int i = 0; i < N; i++){
    aoki -= vp.at(i).first;
    taka += vp.at(i).first + vp.at(i).second;
    if(taka > aoki){
      cout << i+1 << endl;
      return 0;
    }
  }
  
  
    
    
}
