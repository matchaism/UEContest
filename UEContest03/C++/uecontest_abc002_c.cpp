#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
int main() {
  cout << fixed << setprecision(10);//小数点以下の桁を10表示させる
  int xa,ya,xb,yb,xc,yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  int a = xb-xa;
  int b = yb-ya;
  int c = xc-xa;
  int d = yc-ya;
  cout << abs(a*d-b*c)/2.0 << endl;
}
