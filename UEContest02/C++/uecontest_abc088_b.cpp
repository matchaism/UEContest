#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
//解法:2人が最適な戦略を取った時、大きいカードから順に選ぶはず
int main() {
  //入力
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a.at(i);
  sort(a.rbegin(),a.rend()); // 大きい順にソートする
  // a.begin(),a.end()だと小さい順になるので注意
  int ans = 0;
  rep(i,n){
    //奇数の時はAlice 偶数の時はBobのターンになる
    if(i%2==0) ans+=a.at(i);
    if(i%2==1) ans-=a.at(i);
  }
  //出力
  cout << ans << endl;
}
