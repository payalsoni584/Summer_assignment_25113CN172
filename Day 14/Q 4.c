# include <stdio.h>
int maina()
{
    int n;
    printf("enter array elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("duplicate elements are:");
    for(int i=0;i<n;i++){
        int is duplicate =0;
        for (int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                is duplicate =1;
                break;

            }
        }
        if(is duplicable)
        continue;
        int count =0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            count++;

        }
        if(count>0)
        printf("%d",arr[i]);

    }
    return 0;
}