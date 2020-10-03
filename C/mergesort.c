/*
 * NAME: ANIVEDH AURADKAR
 * CLASS: COMP D
 * BATCH: D1
 * ROLL NO: 324006
 */

/*
 * TIME COMPLEXITY OF MERGE SORT: O(nlogn)
*/


#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sc scanf



void merge(int *arr,int l, int mid, int r)
{
	int i,j,k;
	int a=mid-l+1;
	int b=r-mid;

	int L[a], R[b];

	for(i=0;i<a;i++)
		L[i]=arr[l+i];
	for(j=0;j<b;j++)
		R[j]=arr[mid+1+j];

	i=0;
	j=0;
	k=l;
	while(i<a && j<b){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			i++;
		}
		else{
			arr[k]=R[j];
			j++;
	}
		k++;
	}
	
	while(i<a){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j < b) {
		arr[k]=R[j];
		j++;
		k++;
	}
}

void mergesort(int *arr,int l, int r)
{
	int mid;
	if(l<r)
	{
		mid=l + (r-l)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
	else 
		return;
}

int main(int argc, char *argv[])
{
	if(argc==1)
		pf("No extra args specifed");
	else
	{
		int *arr;
		int len=atoi(argv[1]);
		arr=(int *)malloc(sizeof(arr));
		for(int i=0;i<len;i++)
		{
			sc("%d",&arr[i]);
		}
		mergesort(arr,0,len-1);

		for(int i=0;i<len;i++)
			pf("%d ",arr[i]);

	}
	return 0;
}
		
	
