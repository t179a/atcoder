#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  reverse(vec.begin(), vec.end());
  for(int i = 0; i < N-1; i++){
    if(vec.at(i) >= vec.at(i+1)){
      continue;
    }else{
      vec.at(i+1)--;
      if(vec.at(i) >= vec.at(i+1)){
        continue;
      }else{
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}
      
