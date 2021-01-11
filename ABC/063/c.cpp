#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> ten;
  vector<int> other;
  int sum = 0;
  for(int i = 0; i < N; i++){
    int num;
    cin >> num;
    sum += num;
    if(num % 10 == 0){
      ten.push_back(num);
    }else{
      other.push_back(num);
    }
  }
  sort(other.begin(), other.end());
  int len_o = other.size();
  if(len_o == 0){
    cout << 0 << endl;
    return 0;
  }
  if(sum % 10 == 0){
    sum -= other.at(0);
  }
  cout << sum << endl;
}
    
    
