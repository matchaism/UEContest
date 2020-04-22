#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int n;
  int array[200005];
  cin>>n;
  for(int i = 0; i < n; i++){
    cin>>array[i];
  }
  bool is_distinct = true;
  sort(array, array + n);
  for(int i = 0; i < n - 1; i++){
    if(array[i] == array[i + 1]){ //同じ数字があればソート後に隣り合っているはず
      is_distinct = false;
    }
  }
  if(is_distinct){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return(0);
}
