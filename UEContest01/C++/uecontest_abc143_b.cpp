#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
  //入力
  int n;
  cin >> n;
  vector<int> d(n);
  rep(i,n) cin >> d.at(i);
  //処理　全ての場合を足し合わせる
  int ans = 0;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      ans += d.at(i)*d.at(j);
    }
  }
  //出力
  cout << ans << endl;
}
