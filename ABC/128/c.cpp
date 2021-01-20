#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<vector<int>> sw(M);
  for(int i = 0; i < M; i++){
    int K;
    cin >> K;
    for(int j = 0; j < K; j++){
      int s;
      cin >> s;
      s--;
      sw[i].push_back(s);
    }
  }
  vector<int> lg(M);
  for(int i = 0; i < M; i++){
    cin >> lg[i];
  }
  int ans = 0;
  for(int i = 0; i < (1 << N); i++){
    int count = 0;
    bitset<10> b(i);
    //M個の電球それぞれについて光るかどうか。
    for(int j = 0; j < M; j++){
      int on_count = 0;
      int len = sw[j].size();
      for(int k = 0; k < len; k++){
        if(b.test(sw[j][k])){
          on_count++;
        }
      }
      if(on_count % 2 == lg[j]){
        count++;
      }
    }
    if(count == M){
      ans++;
    }
  }
  cout << ans << endl;
}
           
      
  
