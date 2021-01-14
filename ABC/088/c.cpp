#include <bits/stdc++.h>
using namespace std;

int main(){
  int d[3][3];
  int sum = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> d[i][j];
      sum += d[i][j];
    }
  }
  int part1 = d[0][0] + d[1][1] + d[2][2];
  int part2 = d[0][2] + d[1][0] + d[2][1];
  int part3 = d[0][1] + d[1][2] + d[2][0];
  if(part1 == part2 && part2 == part3){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
}
