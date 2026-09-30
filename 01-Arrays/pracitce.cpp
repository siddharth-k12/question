#include <iostream>
#include <vector>
#include <cstring>
// #include <utility>
using namespace std;

int main(){
    
  vector<int> v = {4,5,3,2,1};
  int n = v.size();
  bool isSwap = false;
  for(int i = 0;i<n;i++){
   for(int j = 0;j<n - i - 1;j++){
      if(v[j] > v[j + 1]){
       swap(v[j+1],v[j]);
       isSwap = true;
      }
   }
   isSwap = true;
  }
  for(int i : v){
   cout<<i;
  }
    return 0;
}