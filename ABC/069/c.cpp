#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  
  //4の倍数がN/2以上
  // 2 2 8 1 8 7
  
  int sum_4 = 0;
  int sum_2 = 0;
  for(int i = 0; i < N; i++){
    if(vec.at(i) % 4 == 0){
      sum_4++;
    }else if(vec.at(i) % 2 == 0){
      sum_2++;
    }
  }
  if(sum_4 >= N/2){
    cout << "Yes" << endl;
  }else if(sum_4 >= (N - sum_2 + 1)/2){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
  
