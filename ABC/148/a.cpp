#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  vector<int> vec = {1, 2, 3};
  for(int i = 0; i < 3; i++){
	if(vec.at(i) != A && vec.at(i) != B){
      cout << vec.at(i) << endl;
      return 0;
    }
  }
}
