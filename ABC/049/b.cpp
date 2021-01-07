#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,W;
  cin >> H >> W;
  vector<string> vec(H);
  for(int i = 0; i < H; i++){
    cin >> vec.at(i);
  }
  for(int i = 0; i < H; i++){
	for(int j = 0; j < 2; j++){
      cout << vec.at(i) << endl;
    }
  }
}
