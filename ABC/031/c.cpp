#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> v;
int ans = -1000000007;
pair<int,int> calc(int t, int a){
  if(t > a) swap(t, a);
  int sum_a = 0;
  int sum_t = 0;
  for(int q = t; q <= a; q++){
    if((q - t) % 2 == 0){
      sum_t += v.at(q);
    }else{
      sum_a += v.at(q);
    }
  }
  return make_pair(sum_t, sum_a);
}

void resolve(){
  for(int t = 0; t < N; t++){
    int aoki_max = -1000000007;
    int takahashi_max = -1000000007;
    for(int a = 0; a < N; a++){
      if(t == a) continue;
      pair<int,int> ps = calc(t,a);
      if(aoki_max < ps.second){
        aoki_max = ps.second;
        takahashi_max = ps.first;
      }
    }
    ans = max(ans, takahashi_max);
  }
}


int main(){
  cin >> N;
  for(int i = 0; i < N; i++){
    int a; cin >> a;
    v.push_back(a);
  }
  resolve();
  cout << ans << endl;
  return 0;
}
        
      
  
  
