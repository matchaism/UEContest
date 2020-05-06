#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int n, k;
  double expect[200005];
  cin >> n >> k;
  for(int i = 0; i < n; i++){
    int data;
    cin >> data;
    expect[i] = (data + 1) / 2.0;
  }
  //左からk個のサイコロの期待値を計算する
  double sum = 0;
  for(int i = 0; i < k; i++){
    sum += expect[i];
  }
  //左のサイコロを引き、右のサイコロを足しながらiを進める
  double maxim = sum;
  for(int i = 0; i < n - k; i++){
    sum = sum - expect[i] + expect[i + k];
    maxim = max(maxim, sum);
  }
  printf("%lf\n", maxim);
  return(0);
}
