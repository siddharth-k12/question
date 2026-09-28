// Example 1:

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2,_,_]
// Explanation: Your function should return k = 2, with the first two elements of nums being 2.
// It does not matter what you leave beyond the returned k (hence they are underscores).
// Example 2:

// Input: nums = [0,1,2,2,3,0,4,2], val = 2
// Output: 5, nums = [0,1,4,0,3,_,_,_]
// Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
// Note that the five elements can be returned in any order.
// It does not matter what you leave beyond the returned k (hence they are underscores).


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums ={3,2,2,3};
    int val = 3;
    //i = 0 every time while loop running +1;
    int i = 0;
    //check it for nums size and to while loop condition helpfull
    int check = nums.size();
    //empty vector where value store;
    vector<int> ans;
    //while loop condition where check it smaller than i or not
    while(i < check){
        //in the conditon check nums[i] != val means check value not same 
        //as val so that value store in the ans
        if(nums[i] != val){
            ans.push_back(nums[i]);
        }
        //i++ every time while is running
        i++;
    }
    //check size of ans vectors
    int k = ans.size();
    nums = ans;

    cout<<k<<endl;
  cout<<"nums : ";
    for(int i : nums){
        cout<<i<<" ";
    }

}