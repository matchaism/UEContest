#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef pair<int,int>P;//pairをP型にすると個人的にラク
int main(){
  int n;
  vector<P>work;
  cin >> n;
  for(int i = 0; i < n; i++){
    int times, deadline;
    cin >> times >> deadline;
    work.push_back(P(deadline, times));//締め切りを先に格納する
  }
  //締め切りが早い仕事から終わらせるのが最適解
  bool finish = true;
  int sum = 0;
  sort(work.begin(), work.end());
  for(int i = 0; i < n; i++){
    sum += work[i].second;
    if(sum > work[i].first){
      finish = false;
    }
  }
  if(finish){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return(0);
}
