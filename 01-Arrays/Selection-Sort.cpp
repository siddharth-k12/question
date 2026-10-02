#include <iostream>
#include <vector>
#include <cstring>
// #include <utility>
using namespace std;

int main(){

  vector<int> v = {7,9,3,6,58,12,0};
  int n = v.size();
  for(int i = 0;i<n - 1;i++){
    int minValue = i;
    for(int j = i + 1;j<n;j++){
    if(v[j] < v[minValue]){
      minValue = j;
    }
  }
   swap(v[minValue],v[i]);
}
  for(int i : v){
    cout<<i<<" ";
  }
    return 0;
}