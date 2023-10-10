#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = { 0,1,8,3,4,7,9,7,10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + size);                                         //* Sorting an array --greater<int>()-- descending order ___Basic Sorting___
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}
