#include <iostream>
#include <vector>
#include<map>
#include<set>
#include<unordered_map>
#include <algorithm>
using namespace std;
 
int main(){
    
   int target = 9;
   vector<int> v = {2,7,11,15};
   unordered_map<int,int> u;
   vector<int> ans;

   for(int i =0;i<v.size();i++){
    int first = v[i];
    int second = target - first;
    if(u.find(second) != u.end()){
        ans.push_back(u[second]);
        ans.push_back(i);
    }
    u[first] = i;
   }
   for(int i : ans){
    cout<<v[i]<<" ";
   }
    return 0;
}