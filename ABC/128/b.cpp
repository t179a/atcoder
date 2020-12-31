#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<tuple<string, int, int>> vec;
  for(int i = 1; i <= N; i++){
	string city;
    int score;
    cin >> city >> score;
    score = -score;
    tuple<string, int, int> tup = make_tuple(city, score, i);
    vec.push_back(tup);
  }
  sort(vec.begin(), vec.end());
  for(int i = 0; i < N; i++){
    cout << get<2>(vec[i]) << endl;
  }
}
