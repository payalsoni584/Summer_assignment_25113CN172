# include <stdio.h>
int main()
{
    int n,i,j,sum;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter target sum:");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=1+i;j<n;j++){
            if(arr[i]+arr[j]==sum){
                printf("pair found:%dand %d",arr[i],arr[j]);
            return 0;
          }
        }
    }
    printf("no pair found");
    return 0;
}