#include <bits/stdc++.h>
using namespace std;

int main(){
  int T, N;
  cin >> T >> N;
  queue<int> A;
  for(int i = 0; i < N; i++){
    int n;
    cin >> n;
    A.push(n);
  }
  int M;
  cin >> M;
  vector<int> B(M);
  for(int i = 0; i < M; i++) cin >> B.at(i);
  
  for(int i = 0; i < M; i++){
    if(A.front() > B.at(i)){
      cout << "no" << endl;
      return 0;
    }
    if(A.size() == 0){
      cout << "no" << endl;
      return 0;
    }
    while(A.front() + T < B.at(i)){
      if(A.size() == 0){
        cout << "no" << endl;
        return 0;
      }
      A.pop();
    }
    A.pop();
  }
  cout << "yes" << endl;
  return 0;
}
    
  
