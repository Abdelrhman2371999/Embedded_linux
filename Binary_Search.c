#include <stdio.h>
int binary_search(int arr[],int size,int target)
{
int left =0 , right=size-1;
while (left<=right)
{
	int mid = left +(right -left)/2;
	if (arr[mid]==target)
	return mid;

	if (arr[mig]<target)
		left=mid+1;
	else
		right =mid-1;
}
return -1;
}

int main()
{
	int arr[]={2,4,6,8,10,14,16,20};
	int size =sizeof(arr) /sizeof(arr[0]);
	int target;

	printf("pls Enter The number for Search:");
	scanf ("%d",&target);

	int result = binary_search(arr,size,target);

	if (result != -1)
		printf ("the number found at index %d\n",result);
	else
		printf("the number not found\n");
	return 0;
}

