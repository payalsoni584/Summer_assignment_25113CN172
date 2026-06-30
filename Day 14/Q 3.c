# include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for (int i=0;i<n;i++){
scanf("%d",&arr[i]);

    }
int largest=int _min,
second largest=int_min;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        second largest =largest;
        largest=arr[i];

    }
    else if(arr[i]>second largest &&arr[i]!=largest){
        second largest=arr[i];

    
}    

}
printf("second largest element=%d\n",second largest);
return 0;
}