#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
//アナグラムになっているなら　ソートしたら同じ文字になる
int main() {
  //入力
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s.at(i);
  //処理
  rep(i,n) sort(s.at(i).begin(),s.at(i).end()); //各文字列についてソート
  sort(s.begin(),s.end()); //全ての文字列についてソート
  long long ans = 0; //int型に収まらない場合もある
  long long cnt = 1;　
  //連続する同じ文字列を数える
  rep(i,n-1){
    if(s.at(i)==s.at(i+1)){
      cnt++;
    }else{
      ans+=cnt*(cnt-1)/2; //同じ文字列がcnt個続く　それから2個をとる組み合わせ
      cnt = 1;
    }
  }
  ans+=cnt*(cnt-1)/2; //最後の場合のみ
  cout << ans << endl;
}
