#include <bits/stdc++.h>
using namespace std;

// Union-Find
struct UnionFind {
  vector<int> par, siz;
  
  UnionFind(int n) : par(n, -1), siz(n, 1) { }
  
  int root(int x){
    if(par[x] == -1) return x;
    else return par[x] = root(par[x]);
  }
  
  bool issame(int x, int y) {
    return root(x) == root(y);
  }
  
  bool unite(int x, int y){
    x = root(x);
    y = root(y);
    if(x == y) return false;
    if(siz[x] < siz[y]) swap(x, y);
    par[y] = x;
    siz[x] += siz[y];
    return true;
  }
  
  int size(int x){
    return siz[root(x)];
  }
};

int main(){
  int N, M;
  cin >> N >> M;
  vector<pair<int,int>> vp(M, pair<int,int>());
  for(int i = 0; i < M; i++){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    vp.at(i) = make_pair(a, b);
  }
  
  UnionFind uo(N);
  for(int i = 0; i < M; i++){
    uo.unite(vp.at(i).first, vp.at(i).second);
  }
  int joint = 0;
  for(int i = 0; i < N; i++){
    if(uo.root(i) == i) ++joint;
  }
  
  int ans = 0;
  for(int i = 0; i < M; i++){
    UnionFind uf(N);
    for(int j = 0; j < M; j++){
      if(j == i) continue;
      uf.unite(vp.at(j).first, vp.at(j).second);
    }
    int res = 0;
    for(int j = 0; j < N ; j++){
      if(uf.root(j) == j) ++res;
    }
    if(joint != res){
      ans++;
    }
  }
  cout << ans << endl;
}
    
      
