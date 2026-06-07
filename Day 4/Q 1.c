# include <stdio.h>
int main()
{
    int n,i;
    long long t1=0, t2=1;
    next term;
    printf( " enter the number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:");
    for (i=1;i<=n,i++)
    {
        printf("%11d",t1));
        next term=t1+t2;
        t1=t2;
        t2=next term;
    }
    return0; }

    