# include < stdio.h>
int main()
{int n ,i;
long long a=0,b=1,c;
printf("enter the value of n:");
scanf("%d",&n);
if (n==0)
printf("the %dth fibonacci term is %11d",n,a);
else if(n==1)
printf("the %dth fibonacci term is %11d",n,b);
else {
    for(i=2; i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;

    }
    printf(" the %dth fibonacci term is %11d",n,b);
}
return0;

}