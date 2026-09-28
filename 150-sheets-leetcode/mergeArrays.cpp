#include<iostream>
using namespace std;
#include<vector>

int main(){
     vector<int> nums1 = {1,2,3,0,0,0};
 int m = 3;
 vector<int> nums2 = {2,5,6};
 int n = 3;
 vector<int> ans;
// Output: [1,2,2,3,5,6]

    int i = 0;
    int j = 0;

    while(i<m && j<n){
        if(nums1[i] < nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }else{
            ans.push_back(nums2[j]);
            j++;
        }
    }

    //remaing numbers in nums1;
    while(i < m){
        ans.push_back(nums1[i]);
        i++;
    }
    //remaing numbers in nums2;
    while(j < n){
        ans.push_back(nums2[j]);
        j++;
    }

    for(int i : ans){
        cout<<i<<" ";
    }
    return 0;
}