#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> origin(N);
  vector<int> sorted(N);
  for(int i = 0; i < N; i++){
    cin >> origin.at(i);
    sorted.at(i) = origin.at(i);
  }
  sort(sorted.begin(), sorted.end());
  int left = sorted.at(N/2-1);
  int right = sorted.at(N/2);
  for(int i = 0; i < N; i++){
    if(left >= origin.at(i)){
      cout << right << endl;
    }else{
      cout << left << endl;
    }
  }
}
  
