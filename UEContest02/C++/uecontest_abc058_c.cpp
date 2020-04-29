#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int n;
  int money;
  cin >> n >> money;
  //10000円と5000円の枚数を決め打ちすれば1000円の枚数は自動的に決まる
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= n - i; j++){
      if(i * 10000 + j * 5000 + (n - i - j) * 1000 == money){
	printf("%d %d %d\n", i, j, n - i - j);
	return(0);
      }
    }
  }
  printf("-1 -1 -1\n");
  return(0);
}
