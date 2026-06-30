# include<stdio.h>
int main()
{
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements;\n",n);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int largest =arr[0];
    int smallest =arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>largest)
        largest=arr[i];
        if(arr[i]< smallest)
        smallest=arr[i];

    }
    printf("largest element=%d\n",largest);
    printf("smallest element=%d\n,smallest");
    return 0;
    
}