#include <iostream>
#include <vector>
#include <cstring>
// #include <utility>
using namespace std;

void sum(int n){
  if(n >= 5){
    return;
  }
  n = n+ 1;
  cout<<n<<" ";
  sum(n);
}

int main(){

   sum(0);
  // cout<<a;
    return 0;
}