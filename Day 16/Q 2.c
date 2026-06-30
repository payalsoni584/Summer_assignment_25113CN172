# include<stdio.h>
int main()
{
    int n,i,j,max count =0,
    element;
    printf("enter size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++){
        int count =1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            count++;

        }
        if(count>max count){
            maxcount=count;
            element =arr[i];

        }
    }
    printf("maximum frequency element=%d\n",element);
    printf("frequency=%d",maxcount);
    return 0;
}