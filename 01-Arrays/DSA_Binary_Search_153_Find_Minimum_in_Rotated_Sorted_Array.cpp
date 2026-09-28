// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: 1
// Explanation: The original array was [1,2,3,4,5] rotated 3 times.
// Example 2:

// Input: nums = [4,5,6,7,0,1,2]
// Output: 0
// Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.
// Example 3:

// Input: nums = [11,13,15,17]
// Output: 11
// Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 
 

#include <iostream>
#include <vector>

using namespace std;
 
int main(){
    
vector<int> nums = {4,5,6,7,0,1,2};
vector<int> ans;
 int start = 0 , end = nums.size() - 1;
 while (start < end)
 {
   /* code */
   int mid = start + (end - start) / 2;
   
   if(nums[mid] > nums[end]){
      start = mid + 1;
   }else{
      end = mid;
   }
 }
 cout<<nums[start];


    return 0;
}