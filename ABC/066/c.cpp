#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++){
    cin >> vec.at(i);
  }
  vector<int> b;
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      b.push_back(vec.at(i));
    }else{
      b.insert(b.begin(), vec.at(i));
    }
  }
  if(n % 2 == 1 ){
    reverse(b.begin(), b.end());
  }
  for(int i = 0; i < n; i++){
    cout << b.at(i) << " ";
    if(n == n - 1){
      cout << endl;
    }
  }
}
