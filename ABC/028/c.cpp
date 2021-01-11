#include <bits/stdc++.h>
using namespace std;

int main(){
  int d[5];
  for(int i = 0; i < 5; i++){
    cin >> d[i];
  }
  vector<int>vec;
  for(int i = 0; i < 3; i++){
    for(int j = i+1; j < 4; j++){
      for(int k = j + 1; k < 5; k++){
        int sum = d[i] + d[j] + d[k];
        vec.push_back(sum);
      }
    }
  }
  sort(vec.begin(), vec.end(), greater<int>{});
  cout << vec.at(2) << endl;
}
