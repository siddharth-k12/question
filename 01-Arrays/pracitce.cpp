#include <iostream>
#include <vector>
using namespace std;

bool sortedA(vector<int> arr, int n){
   if(n == 0 || n == 1){
      return true;
   }
    return arr[n - 1] >= arr[n - 2] && sortedA(arr,n - 1);
}

int main(){
   vector<int> arr = {1,2,8,4,5};
   int n = arr.size();
   if(sortedA(arr,n)){
      cout<<"true";
   }else{
       cout<<"false";
   }
    return 0;
}
