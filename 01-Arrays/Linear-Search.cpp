#include<iostream>
using namespace std;

int main(){
    int arr[] = {4,3,2,8,5,1};
    int size = sizeof(arr) / sizeof(int);
    int target = 10;

    for(int i=0;i<size;i++){
        if(target == arr[i]){
            cout<<i;
        }
        
    }
    return 0;
}