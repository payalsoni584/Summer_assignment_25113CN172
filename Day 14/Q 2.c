# include<stdio.h>
int main()
{
    int n,key,count=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("enter element whose frequency is to be found:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        count++;

    }
    printf("frequency of%d=%d\n",key,count);
    return 0;
}