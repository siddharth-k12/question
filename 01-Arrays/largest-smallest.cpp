#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 2, 9, -15, 0};

    int largest = arr[0];
    int smallest = arr[0];

    int size = sizeof(arr) / sizeof(int);
    for (int i = 1; i < size; i++)
    {
        // largest value
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        // smallest smallest
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout << "Largest : " << largest << endl;
    cout << "Smallest : " << smallest;

    return 0;
}