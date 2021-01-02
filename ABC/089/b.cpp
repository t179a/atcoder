#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  set<char> sc;
  for(int i = 0; i < N; i++){
	char c;
    cin >> c;
    sc.insert(c);
  }
  int sum = sc.size();
  string ans = "Four";
  if(sum == 3){
	ans = "Three";
  }
  cout << ans << endl;
  
}
