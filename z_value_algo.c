#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *arr="aabxaabxcaabxaabxay";
    //int n=strlen(arr);
    int zbox[strlen(arr)];
    //zbox[0]=0;
    int i;
    for(i=0;i<strlen(arr);i++)
    {
        if(i==0)
        {
            zbox[i]=0;
        }
        else
        {
        int k=0,j=i;
        int count=0;
        while(arr[j]==arr[k])
        {
            j++;
            k++;
            count++;
        }
        zbox[i]=count;
        }
    }
    for(i=0;i<strlen(arr);i++)
    {
        printf("%d",zbox[i]);
    }
    return 0;
}