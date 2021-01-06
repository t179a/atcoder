#include <bits/stdc++.h>
using namespace std;

int main(){
  int card_b[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> card_b[i][j];
    }
  }
  int N;
  cin >> N;
  int called[N];
  for(int i = 0; i < N; i++){
    cin >> called[i];
  }
  bool card_a[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      card_a[i][j] = false;
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < N; k++){
        if(card_b[i][j] == called[k]){
          card_a[i][j] = true;
        }
      }
    }
  }
  string ans = "No";
  for(int i = 0; i < 3; i++){
    if(card_a[i][0] && card_a[i][1] && card_a[i][2]){
      ans = "Yes";
    }
  }
  for(int i = 0; i < 3; i++){
    if(card_a[0][i] && card_a[1][i] && card_a[2][i]){
      ans = "Yes";
    }
  }
  if(card_a[0][0] && card_a[1][1] && card_a[2][2]){
    ans = "Yes";
  }
  if(card_a[0][2] && card_a[1][1] && card_a[2][0]){
    ans = "Yes";
  }
  
  cout << ans << endl;
}
  
  
