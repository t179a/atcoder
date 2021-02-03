#include <bits/stdc++.h>
using namespace std;

int main(){
  int64_t N, M, K;
  cin >> N >> M >> K;
  vector<int64_t> A(N);
  vector<int64_t> B(M);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
  }
  for(int i = 0; i < M; i++){
    cin >> B.at(i);
  }
  int64_t time = 0;
  int64_t book = 0;
  int64_t indexA = N-1;
  for(int i = 0; i < N; i++){
    if(time + A.at(i) <= K){
      time += A.at(i);
      book++;
    }else{
      indexA = i-1;
      break;
    }
  }
  int64_t indexB = 0;
  int64_t ans = book;
  bool ok = true;
  while(indexB < M) {
    while(time + B.at(indexB) <= K){
      time += B.at(indexB);
      book++;
      ans = max(ans, book);
      indexB++;
      if(indexB >= M){
        ok = false; 
        break;
      }
    }
    if(!ok) break;
    if(indexA == -1) break;
    time -= A.at(indexA);
    indexA--;
    book--;
  }
  cout << ans << endl;
}
  
    
  
