// 26. Remove Duplicates from Sorted Array
// Example 1:

// Input: nums = [1,1,2]
// Output: 2, nums = [1,2,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Example 2:

// Input: nums = [0,0,1,1,1,2,2,3,3,4]
// Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
// It does not matter what you leave beyond the returned k (hence they are underscores).

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,1,2};
    vector<int> ans;
    int k = 0;
    int i = 1;
    int size = nums.size();
    ans.push_back(nums[0]);
    while(i < size){
        if(nums[i] != ans.back()){
            ans.push_back(nums[i]);
        }
        i++;

    }
    k = ans.size();
    for(int i : ans){
        cout<<i;
    }
    cout<<" K :" << k;
    return 0;
}