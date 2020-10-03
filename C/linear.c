/*
 * Name: Anivedh Auradkar
 * Class: Comp Div:D Batch:D1
 * Roll: 324006
 * GR:21810720
*/

/*
#TIME COMPLEXITY
 * The time depends on the size of the array. Best case scenario being finding the element at the very beginning of the array and in worst case it will be present at the end
 * O(n)-Worst case
 * O(1)- Best case
 * O(n)-Average case
*/

/*
# SPACE COMPLEXITY
 * O(1)
*/



#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	if(argc==1)
		printf("Usage: %s length_of_array (eg-5)",argv[0]);
	else{
		int *arr,ele,flag=0;
		int len = atoi(argv[1]);

		arr=malloc(len*sizeof(*arr));

		for(int i=0;i<len;i++)
		{
			scanf("%d",&arr[i]);
	}
		printf("Enter element to be searched\n");
		scanf("%d",&ele);
		for(int i=0;i<len;i++)
		{
			if(arr[i]==ele)
				flag=1;

		}
		if(flag==1)
			printf("%d Found!!",ele);
		else
			printf("%d Not Found!!",ele);
}
return 0;
}
