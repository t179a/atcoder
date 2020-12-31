#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  double sum = 0;
  for(int i = 0; i < N; i++){
	double num;
    string str;
    cin >> num >> str;
    if(str == "JPY"){
      sum += num;
    }else if(str == "BTC"){
      sum += num * 380000;
    }
  }
  cout << sum << endl;
}
