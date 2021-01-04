#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len_S = S.size();
  vector<int> vec(6, 0);
  for(int i = 0; i < len_S; i++){
    int num = S.at(i) - 'A';
    vec.at(num)++;
  }
  for(int i = 0; i < 6; i++){
    if(i == 5){
      cout << vec.at(i) <<endl;
    }else{
      cout << vec.at(i) << " ";
    }
  }
}
