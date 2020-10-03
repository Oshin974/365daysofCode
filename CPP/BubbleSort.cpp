#include <iostream>
 
using namespace std;
 
// Sorting algorithm for sort the arr[] of size n 
void BubbleSort (int arr[], int n)
{
	int i, k;
	for (i = 0; i < n; ++i)
	{
		for (k = 0; k < n-i-1; ++k)
		{
			// Swaping values if condition match
			if (arr[k] > arr[k+1])
			{
				arr[k] = arr[k]+arr[k+1];
				arr[k+1] = arr[k]-arr[k + 1];
				arr[k] = arr[k]-arr[k + 1];
			}
		}
		// Value at n-i-1 will be maximum of all the values below this index.
	}	
}	
 
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}
 
	BubbleSort(arr, n);
 
	// Display the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}
