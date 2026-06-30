# include<stdio.h>
int main()
{
    int n,i;int even=0,odd=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;I<n;i++)
{
    scanf("%d",&arr[i]);

}
for(i=0;i<n;i++){
    if(arr[i]%2==0)
    even++;
    else 
    odd++;

}
printf("even elements=%d\n",even);
printf("odd elements =%d\n",odd);
return 0;

    }
