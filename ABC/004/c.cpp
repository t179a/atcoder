#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  int qt_5_rm_5 = (N/5)%6;
  int rm_5 = N % 5;
  vector<int> vec = {1,2,3,4,5,6};
  
  for(int i = 0; i < qt_5_rm_5; i++){
    for(int j = 0; j < 5; j++){
      swap(vec.at(j), vec.at(j+1));
    }
  }
  for(int i = 0; i < rm_5; i++){
    swap(vec.at(i), vec.at(i+1));
  }
  for(int i = 0; i < 6; i++){
    if(i == 5){
      cout << vec.at(i) << endl;
    }else{
      cout << vec.at(i);
    }
  }
}
    
      
  
