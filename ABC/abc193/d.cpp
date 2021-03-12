#include <bits/stdc++.h>
using namespace std;

int calc(string str, int p){
  vector<int> v(9, 0);
  v.at(p-1)++;
  int ans = 0;
  for(int i = 0; i < 4; i++){
    int n = (int) str.at(i) - '0';
    v.at(n-1)++;
  }
  for(int i = 0; i < 9; i++){
    ans += (i + 1) * pow(10, v.at(i));
  }
  return ans;
}
  

int main(){
  int K; string S, T; cin >> K >> S >> T;
  vector<int> vnum(9, 0);
  for(int i = 0; i < 4; i++){
    int ns = S.at(i) - '0';
    int nt = T.at(i) - '0';
    vnum.at(ns - 1)++;
    vnum.at(nt - 1)++;
  }
  double ans = 0;
  double cards = 9 * K - 8;
  for(int i = 1; i <= 9; i++){
    if(vnum[i - 1] + 1 > K) continue;
    for(int j = 1; j <= 9; j++){
      if(calc(S, i) > calc(T, j)){
        if(vnum[j - 1] + 1 > K) continue;
        //cout << i << " " << j << endl;
        if(i == j){
          ans += ((K - vnum[i-1])/cards) * ((K - vnum[j - 1] - 1)/(cards - 1));
        }else{
          ans += ((K - vnum[i-1])/cards) * ((K - vnum[j - 1])/(cards - 1));
        }
      }
    }
  }
  printf("%.10lf", ans);
}
                                       
      
