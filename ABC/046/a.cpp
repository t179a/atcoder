#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> vec(3);
  for(int i = 0; i < 3; i++){
	cin >> vec.at(i);
  }
  set<int> set_color;
  for(int i = 0; i < 3; i++){
    set_color.insert(vec.at(i));
  }
  cout << set_color.size() << endl;
}
  
