#include <bits/stdc++.h>
using namespace std;

int main(){
  string w1;
  cin >> w1;
  string w2;
  if(w1 == "Sunny"){
    w2 = "Cloudy";
  }else if(w1 == "Cloudy"){
    w2 = "Rainy";
  }else{
	w2 = "Sunny";
  }
  cout << w2 << endl;
}
