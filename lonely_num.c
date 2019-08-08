#include<stdio.h>
int main()
{
	int arr[]={1,3,2,1,3,2,2};
	int n=7;
	int i,j,num=0;
	for(i=0;i<n;i++)
	{
	num=num^arr[i];
	}
//	Another solution   
	/*int s=num;
	int t1=0;
	int t2=0;
	for(i=0;i<n;i++)
	{
		if((arr[i]&s)==0)
			t1=t1^arr[i];
		else
			t2=t2^arr[i];
	}
	printf("%d",t1);
	printf("%d",t2);*/
	printf("%d",num);
}