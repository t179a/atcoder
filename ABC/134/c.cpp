#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(int i = 0; i < N; i++){
	cin >> vec.at(i);
  }
  vector<int> vec_o(vec);
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  int a_max = vec.at(0);
  int a_2ndmax = vec.at(1);
  for(int i = 0; i < N; i++){
    if(vec_o.at(i) == a_max){
	  cout << a_2ndmax << endl;
    }else{
      cout << a_max << endl;
    }
  }
}
