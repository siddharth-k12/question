// 11. Container With Most Water
// Medium
// Topics
// premium lock icon
// Companies
// Hint
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.


// Example 1:

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

// Example 2:

// Input: height = [1,1]
// Output: 1
 
// BRUTE FROCE
#include <iostream>
#include <vector>

using namespace std;
 
int main(){
vector<int> height = {1,8,6,2,5,4,8,3,7};
//  height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// max(4,4);
    int maxVal = 0;
    for(int i = 0;i<height.size();i++){
        for(int j = i + 1;j<height.size();j++){
            int width = j - i;
            int size = min(height[i],height[j]);
            int total = width * size;
            maxVal = max(maxVal,total);
        }
    }
    cout<<maxVal<<endl;


//OPMTIMIZE CODE
 int OmaxVal = 0;
    int left = 0;
    int right = height.size();

    while(left < right){
        int size =  right - left;
        // cout<<size<<endl;
        int s = min(height[left] , height[right]);
        int total = size  * s;
        OmaxVal = max(total,OmaxVal);
        // cout<<maxVal<<endl;
        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return 0;
}