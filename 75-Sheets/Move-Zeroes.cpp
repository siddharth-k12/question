// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

#include <iostream>
#include <vector>

using namespace std;
 
int main(){
    
 vector<int> nums = {0,1,0,3,12};
 vector<int> ans;
 int j = 0;
// Output: [1,3,12,0,0]

  for(int i =0;i<nums.size();i++){
    if(0  != nums[i]){
        ans.push_back(nums[i]);
        j++;
    }
  }
  while(j<nums.size()){
    ans.push_back(0);
    j++;
  }
for(int i : ans){
    cout<<i<<" ";
}
    return 0;
}