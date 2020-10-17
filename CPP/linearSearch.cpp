/******************************************************************************
LINEAR SEARCH (CPP)

Test case - 1:

Input:
5
10 22 78 91 38
87

Ouput:
Key is not found in the array
-------------------------------------------
Test case - 2:

Input:
10
9 76 229 20 63 92 38 19 71 92
63

Ouput:
Key is found at index 4 in the array

*******************************************************************************/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    // Traverse through the array
    for (int i = 0; i < n; i++)
    {
        // Return the index if the key is found
        if (arr[i] == key)
            return i;
    }

    // Return -1 if key is not found
    return -1;
}

int main()
{
    // Read the size of the array
    int N;
    cin >> N;

    // Read the array
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // Read the key to be searched
    int key;
    cin >> key;

    // Make a call to linearSearch function written above main method
    int result = linearSearch(arr, N, key);
    if (result == -1)
        cout << "Key is not found in the array";
    else
        cout << "Key is found at index " << result << " in the array";

    return 0;
}
