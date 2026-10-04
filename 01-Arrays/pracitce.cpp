#include <iostream>
#include <vector>
using namespace std;

int binaryS(vector<int> arr, int target, int start, int end)
{
   if (start <= end) 
   {
      int mid = start + (end - start) / 2;
      if (arr[mid] == target)
         return mid;

      if (arr[mid] < target)
      {
         return binaryS(arr, target, mid + 1, end);
      }
      else
      {
         return binaryS(arr, target, start, mid - 1);
      }
   }
   return -1;
}

int main()
{
   vector<int> arr = {-1, 0, 5, 7, 9};
   int target = 2;
   cout << binaryS(arr, target, 0, arr.size() - 1);
   return 0;
}
