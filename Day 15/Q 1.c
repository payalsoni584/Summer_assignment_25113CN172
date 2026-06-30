# include <stdio.h>
int main()
{
int n,i,temp;
printf("enter size:");
scanf("%d",&n);
int arr[n];
printf("enter elements:\n");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i]=temp;

    }
    printf("reserved array:");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;

}