#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> vi(N);
  for(int i = 0; i < N; i++){
    cin >> vi.at(i);
  }
  sort(vi.begin(), vi.end());
  reverse(vi.begin(), vi.end());
  int sum = 0;
  int part1 = 0;
  for(int i = 0; i < N; i++){
    sum += vi.at(i);
    if(i % 2 == 0){
      part1 += vi.at(i);
    }
  }
  int ans = part1 - (sum - part1);
  cout << ans << endl;
}
