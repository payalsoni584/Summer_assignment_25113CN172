# include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    float avg=(float)sum/n;
    printf("sum=%d",sum);
    printf("average=%.2f\n",avg);
    return 0;
}