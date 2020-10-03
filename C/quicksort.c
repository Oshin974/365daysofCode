/*

NAME: ANIVEDH AURADKAR
CLASS: COMP DIV: D
ROLL NO:324006
SUB: DAAL ASSGN-2
*/

/*
TIME COMPLEXITY: O(nlogn)
		Worst case: O(n^2)

*/

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}


int partition(int *arr, int low, int high)
{
int pivot=arr[high];
int i=low-1;
for(int j=low;j<=high-1;j++)
{
	if(arr[j]<pivot)
	{
		i++;
		swap(&arr[i],&arr[j]);
	}
}
swap(&arr[i+1],&arr[high]);
return i+1;
}

void quick_sort(int *arr,int low, int high)
{
	if(low<high)
	{
		int p=partition(arr,low,high);
		quick_sort(arr,low,p-1);
		quick_sort(arr,p+1,high);
	}
}

void display(int *arr,int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

int main(int argc, char *argv[])
{

	if(argc==1)
		printf("USAGE: ./a.out SIZE_OF_THE_ARRAY");
	else{
		int n=atoi(argv[1]);
		int *arr;
		arr=(int*)malloc(sizeof(*arr));
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);
		quick_sort(arr,0,n-1);
		display(arr,n);
	}
	return 0;
}

