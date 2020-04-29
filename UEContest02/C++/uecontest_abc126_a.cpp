#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
  int n, k;
  string str;
  cin >> n >> k;
  cin >> str;
  k--;
  str[k] = tolower(str[k]);//k番目の文字を小文字化
  cout << str << endl;
  return(0);
}
