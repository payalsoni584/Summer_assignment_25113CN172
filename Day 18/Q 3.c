# include <stdio.h>
int main(){
    int n,key,low,high,mid,found=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];

    printf("enter sorted elements:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter elements to search:");
    scanf("%d",&key);
    low=0;
    high =n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("enter found at position %d",mid+1);
            return 0;
            
        }
        else if(a[mid]<key)
        low=mid+1;
        elsehigh=mid-1;
        printf("element not found");
        return 0;
}