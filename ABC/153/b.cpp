#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, N;
  cin >> H >> N;
  int sum = 0;
  for(int i = 0; i < N; i++){
	int num;
    cin >>  num;
    sum += num;
  }
  string ans;
  if(sum < H){
    ans = "No";
  }else{
    ans = "Yes";
  }
  cout << ans << endl;
}
