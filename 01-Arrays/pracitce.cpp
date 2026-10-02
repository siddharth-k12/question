#include <iostream>
#include <vector>
#include <cstring>
// #include <utility>
using namespace std;

int sum(int n){
   if(n == 0){
    return 0;
   }
   return n = n + sum(n - 1);
}

int main(){

   cout<<sum(4)<<" ";

    return 0;
}