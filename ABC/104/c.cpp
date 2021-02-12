#include<bits/stdc++.h>
using namespace std;

int main(){
  int64_t D, G; cin >> D >> G;
  vector<tuple<int64_t,int64_t,int64_t>> SSB;
  for(int i = 0; i < D; i++){
    int64_t score = (i + 1) * 100;
    int64_t sum, bonus; cin >> sum >> bonus;
    SSB.push_back(make_tuple(score,sum,bonus));
  }
  sort(SSB.begin(), SSB.end());
  reverse(SSB.begin(), SSB.end());
  int64_t ans = 1000000;
  for(int i = 0; i < ( 1 << 10); i++){
    bitset<10> b(i);
    //cout << b << endl;
    int64_t sum_p = 0;
    int64_t sum_s = 0;
    for(int j = 0; j < D; j++){
      if(b.test(j)){
        sum_p += get<1>(SSB.at(j));
        sum_s += get<0>(SSB.at(j)) * get<1>(SSB.at(j)) + get<2>(SSB.at(j));
      }
    }
    if(sum_s >= G){
      ans = min(sum_p, ans);
      continue;
    }
    bool ok = false;
    for(int j = 0; j < D; j++){
      if(ok) break;
      if(b.test(j)) continue;
      for(int p = 0; p < (int) get<1>(SSB.at(j)); p++){
        sum_p += 1;
        sum_s += get<0>(SSB.at(j));
        //cout << "sum_p " << sum_p << " sum_s " << sum_s << endl;
        if(sum_s >= G) {
          ok = true;
          break;
        }
      }
    }
    ans = min(ans, sum_p);
  }
  cout << ans << endl;
}
