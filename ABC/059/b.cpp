#include <bits/stdc++.h>
using namespace std;

int main(){
  string A, B;
  cin >> A >> B;
  vector<string> vec = {"GREATER", "LESS", "EQUAL"};
  int len_a = A.size();
  int len_b = B.size();
  if(len_a > len_b){
    cout << vec.at(0) << endl;
    return 0;
  }else if(len_a < len_b){
    cout << vec.at(1) << endl;
    return 0;
  }
  for(int i = 0; i < len_a; i++){
    if(A.at(i) > B.at(i)){
      cout << vec.at(0) << endl;
      return 0;
    }else if(A.at(i) < B.at(i)){
      cout << vec.at(1) << endl;
      return 0;
    }
  }
  cout << vec.at(2) << endl;
  return 0;
            
}
