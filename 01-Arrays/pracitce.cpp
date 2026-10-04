#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int> arr,vector<int> newArr,int i ){
   if(arr.size() == i){
      for(int val : newArr){
         cout<<val << " ";
      }
      cout<<endl;
      return;
   }
   newArr.push_back(arr[i]);
    sub(arr,newArr,i+1);

   newArr.pop_back();
     sub(arr,newArr,i+1);
}

int main()
{
   vector<int> arr = {1,2,3};
   vector<int> newArr;
   sub(arr,newArr,0);
   return 0;
}
