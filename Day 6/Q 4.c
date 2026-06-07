# include <stdio.h>
int main()
{
    int x,n,i;
    long long result=1;
    printf("enter base and exponent:");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    result*=x;
    printf("%d^%d=%11d",x,n,result);
    return 0;
}