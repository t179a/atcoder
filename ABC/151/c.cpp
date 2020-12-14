#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  set<int> s_ac;
  int sum_wa = 0;
  vector<int> v_wa(100001,0);
  for(int i = 0; i < M; i++){
    int num;
    string str;
    cin >> num >> str;
    if(str == "AC" && !s_ac.count(num)){
      s_ac.insert(num);
      sum_wa += v_wa.at(num);
    }
    else if(str == "WA"){
      v_wa.at(num) = v_wa.at(num) + 1;
    }
  }
  int sum_ac = s_ac.size();
  cout << sum_ac << " " << sum_wa << endl;
}
    
  
