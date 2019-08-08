

#include <stdio.h>
#include<math.h>
int main()
{
    int arr[]={1,4,2,1,3,2,2};
    int n=7;
    int i;
   /*we r negating the value at index arr[i]*/
    for(i=0;i<n;i++)
    {
        arr[abs(arr[i])] = arr[abs(arr[i])]*-1;
    }
    /*below is one another method for same problem */
   /* for(i=0;i<n;i++)
    {
    	int m=arr[i];
    	if(m<0)
    		m=-1*m;
    	arr[m]=-1*arr[m];
    }*/
    int count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
            count ++;
    }
    printf("%d",count);

    return 0;
}
