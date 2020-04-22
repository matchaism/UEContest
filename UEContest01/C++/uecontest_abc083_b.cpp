#include<iostream>
using namespace std;
int main(){
  int n;
  int a,b;
  cin>>n>>a>>b;
  int ans = 0;
  for(int i = 1; i <= n; i++){
    int sum = 0;
    int temp = i;
    while(temp > 0){ //各桁の和を求める
      sum += temp % 10;
      temp /= 10;
    }
    if(a <= sum && sum <= b){ //各桁の和が範囲内か調べる
      ans += i;
    }
  }
  cout<<ans<<endl;
  return(0);
}
