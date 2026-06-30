# include <stdio.h>
int main(){
    int n,i,sum=0,total;
    printf("enter n (numbers from 1 to n):");
    scanf("%d",&n);
    int arr[n-1];
    printf("enter %d elements :\n",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    total=n*(n+1)/2;
    printf("missing number=%d",total-sum);
    return 0;
}