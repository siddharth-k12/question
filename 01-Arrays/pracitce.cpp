#include <iostream>
#include <vector>
#include <cstring>
// #include <utility>
using namespace std;

void sum(int n){
   cout<<n<<" ";
  if(n <= 1){
    return;
  }
  n = n - 1;
 
  sum(n);
}

int main(){

   sum(5);
  // cout<<a;
    return 0;
}