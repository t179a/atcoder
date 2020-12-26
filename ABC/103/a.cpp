#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(3);
  for(int i = 0; i < 3; i++){
	cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  
  vector<int> sum_v;
  do{
    int sum = 0;
    for(int i = 0; i < 2; i++){
	  sum += abs(vec.at(i+1) - vec.at(i));
    }
    sum_v.push_back(sum);
    
  }while(next_permutation(vec.begin(), vec.end()));
  
  sort(sum_v.begin(), sum_v.end());
  cout << sum_v.at(0) << endl;
}
    
