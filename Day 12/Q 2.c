# include <stdio.h>
# include <math.h>
int armstrong(int n)
{
    int sum=0,temp=n,digits=0;
    int original=n;
    while(temp)
    {
        digits++;
        temp/=10;

    }
temp=n;
while(temp)
{
    sum+=pow(temp%10,digits);
    temp/=10;

}
return(sum==original);
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(armstrong (n))
    printf("armstrong number");
    elseprintf("not armstrongnumber");
    return 0;
    
}