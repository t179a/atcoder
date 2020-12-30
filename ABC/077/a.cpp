#include <bits/stdc++.h>
using namespace std;

int main(){
  string origin1, origin2;
  cin >> origin1 >> origin2;
  int len = origin1.size();
  string alter1 = "";
  string alter2 = "";
  for(int i = 0; i < len; i++){
    alter1 += origin2.at(len - i - 1);
    alter2 += origin1.at(len - i - 1);
  }
  string ans = "NO";
  if(alter1 == origin1 && alter2 == origin2){
    ans = "YES";
  }
  cout << ans << endl;
  
}
