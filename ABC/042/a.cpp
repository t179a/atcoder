#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(3);
  for(int i = 0; i <3 ; i++){
	cin >> vec.at(i);
  }
  int sum_5 = 0;
  int sum_7 = 0;
  for(int i = 0; i < 3; i++){
    if(vec.at(i) == 5){
      sum_5++;
    }else if(vec.at(i) == 7){
	  sum_7++;
    }
  }
  string ans = "NO";
  if(sum_5 == 2 && sum_7 == 1){
	ans = "YES";
  }
  cout << ans << endl;
}
