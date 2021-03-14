#include<bits/stdc++.h>
using namespace std;
int64_t N, K; 
vector<int64_t> S;

bool isOK(int index, int64_t key){
  if(S.at(index) >= key) return true;
  else return false;
}

int binary_search(int64_t key){
  int left = -1;
  int right = (int) S.size();
  while((right - left) > 1){
    int mid = left + (right - left)/2;
    if(isOK(mid, key)){
      right = mid;
    }else{
      left = mid;
    }
  }
  return right;
}

int main(){
  cin >> N >> K;
  vector<int64_t> A(N);
  for(int i = 0; i < N; i++){
    cin >> A.at(i);
    if(i == 0){
      S.push_back(A.at(i));
    }else{
      S.push_back(S.at(i-1) + A.at(i));
    }
  }
  int64_t ans = 0;
  for(int i = 0; i < N; i++){
    int in = binary_search(K);
    K += A.at(i);
    if(in == -1) continue;
    ans += N - in;
  }
  cout << ans << endl;
}
