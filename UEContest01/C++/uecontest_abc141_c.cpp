#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
  int n,k,q;
  cin >> n >> k >> q;
  vector<int> a(q);
  rep(i,q){
    cin >> a.at(i);
    a.at(i)--; // 0-indexedにする
  }
  vector<int> p(n,k-q); //n人分のポイントを管理する配列　初期値はk-q
  //正解者の得点を増やしていく
  rep(i,q){
    p.at(a.at(i))++;
  }
  //出力していく
  rep(i,n){
    if(p.at(i)>0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
