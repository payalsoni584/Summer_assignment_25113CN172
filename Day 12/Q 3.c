# include<stdio.h>
int fibonacci(intn)
{
    if(n<=1)
    return n;
    return fibonacci(n-1) +fibonacci(n-2);

}
int main()
{
    int n;
    printf("enter term :");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
    
}