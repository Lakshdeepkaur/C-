#include<stdio.h>
#include<stdlib.h>
int fun(void *ptr1,void *ptr2)
{
	int *a=(int *)ptr1;
	int *b=(int *)ptr2;
	return *a-*b;
}
int main()
{
	printf("Enter the size of array\n");
	int n;
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array elements\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the K value\n");
    int k;
    scanf("%d",&k);
    qsort(arr,n,sizeof(int),fun);
    printf("%d",arr[k]);
}