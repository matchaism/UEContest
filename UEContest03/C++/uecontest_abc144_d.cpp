#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265359 // このように定数として使えるようにしておく
int main() {
  cout << fixed << setprecision(10);//小数点以下の桁を10まで表示させる
  double a,b,x;
  cin >> a >> b >> x;
  double v=a*a*b;//水筒の体積を求める
  double ans;
  //水筒の体積の半分でxの値を場合分け
  //atanはtanの逆関数 ラジアンで出力されることを忘れずに
  if(v==2*x) ans = atan(b/a)*180.0/PI;
  if(v>2*x) ans = atan(a*b*b/(2*x))*180.0/PI;
  if(v<2*x) ans = atan(2*(a*a*b-x)/(a*a*a))*180.0/PI;
  cout << ans << endl;
}
